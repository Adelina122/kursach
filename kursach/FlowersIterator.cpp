#include "FlowersIterator.h"
#include "Flowers.h"

FlowersContainer::FlowersContainer(void) : last(NULL), first(NULL) {} //конструктор без параметров

FlowersContainer::~FlowersContainer(void)
{
    this->clearContainer();
}

void FlowersContainer::pushBack(Flowers* obj) //добавить элемент в конец очереди
{
    FlowersElement* temporary = new FlowersElement;

    temporary->info = obj; //присваиваем первое значение заданому параметру
    temporary->previous = NULL; //

    if (!this->last) //если не конец
    {
        this->last = this->first = temporary; //очереть состоит из одного єлемента temp
        temporary->next = NULL; //указатель на следующий элемент очереди с 1 эл
    }
    else //если очередь не состоит из 1 элемента
    {
        temporary->next = this->last; //
        this->last->previous = temporary;
        this->last = temporary;
    }
}

Flowers* FlowersContainer::popBack(void) //удалить последний элемент
{
    if (!this->last) //если очередь пустая - возвращаем указатель на нульпоинтер
        return NULL;

    if (!this->last->next) //если очередь состоит из 1 элемента
    {
        Flowers* out = this->last->info;
        delete this->last; //удаляем последний

        this->last = this->first = NULL;
        return out;
    }
    FlowersElement* deleteEl = this->last;
    Flowers* out = this->last->info;
    this->last = this->last->next;
    delete deleteEl;
    this->last->previous = NULL;
    return out;
}

//bool FlowersContainer::pop(string name) //удаление элемента с заданным значением
//{
//    FlowersElem* tempObject = this->back; //присваивание временной переменной последний элемент очереди
//    while (tempObject)
//        if (tempObject->data->getName() == name)
//        {
//            FlowersElem* del = tempObject;
//            if (tempObject->prev)
//                tempObject->prev->next = tempObject->next;
//            if (tempObject->next)
//                tempObject->next = tempObject->prev;
//            delete del->data;
//            delete del;
//            return true;
//        }
//        else
//            tempObject = tempObject->next;
//    return false;
//}

bool FlowersContainer::popElement(string name)
{
    FlowersElement* tempObject = this->last;
    while (tempObject)
        if (tempObject->info->getName() == name)
        {
            if (!(this->last->next || this->last->previous))
                this->last = NULL;
            if (tempObject->previous)
                tempObject->previous->next = tempObject->next;
            if (tempObject->next)
                tempObject->next->previous = tempObject->previous;
            if (tempObject == this->last)
                this->last = tempObject->next;
            delete tempObject->info;
            delete tempObject;
            return true;
        }
        else
            tempObject = tempObject->next;
    return false;
}

void FlowersContainer::clearContainer(void)
{
    while (this->last)
        delete this->popBack();
}

Flowers* FlowersContainer::findElement(string name)//поиск по заданому параметру
{
    FlowersElement* tempObject = this->last;
    while (tempObject)
        if (tempObject->info->getName() == name)
            return tempObject->info;
        else
            tempObject = tempObject->next;
    return NULL;
}

FlowersIterator::FlowersIterator(const FlowersContainer* obj) : object(obj), iterator(obj->last) {}

FlowersElement* FlowersIterator::getBeginContainer(void)
{
    return object->last;
}

Flowers* FlowersIterator::getIterator(void) //текущая информация
{
    return iterator->info;
}

bool FlowersIterator::isEndContainer(void) //проверка на конец очереди
{
    return iterator == NULL;
}

void FlowersIterator::nextElement(void) //функция для перехода к следующему єлементу
{
    iterator = iterator->next;
}

//---------------------------------------------------------------------------------------------