#include "ProviderIterator.h"
#include "Provider.h"

ProviderContainer::ProviderContainer(void) : last(NULL), first(NULL) {} //конструктор без параметров

ProviderContainer::~ProviderContainer(void)
{
    this->clearContainer();
}

ProviderElement* ProviderContainer::getLast(void)
{
    return this->last;
}


//---------------------------------------------------------------------------------------------

ProviderElement* ProviderContainer::getFirst(void)
{
    return first;
}


ProviderElement* ProviderIterator::getIter(void)
{
    return this->iterator;
}

ProviderContainer* ProviderIterator::getObject(void)
{
    return this->object;
}
//---------------------------------------------------------------------------------------------

void ProviderContainer::pushBack(Provider* obj) //добавить элемент в конец очереди
{
    ProviderElement* temporary = new ProviderElement;

    temporary->info = obj; //присваиваем первое значение заданому параметру
    temporary->previous = NULL; //

    if (!this->last) //если не конец
    {
        this->last = this->first = temporary; //очереть состоит из одного єлемента temp
        temporary->next = NULL; //указатель на следующий элемент очереди с 1 эл
    }
    else //если очередь не состоит из 1 элемента
    {
        if (this->last->previous) //если не конец
        {
            temporary->next = this->last; //
            this->last->previous = temporary;
            this->last = temporary;
        }
    }
}

//---------------------------------------------------------------------------------------------

Provider* ProviderContainer::popBack(void) //удалить последний элемент
{
    if (!this->last) //если очередь пустая - возвращаем указатель на нульпоинтер
        return NULL;

    if (!this->last->next) //если очередь состоит из 1 элемента
    {
        Provider* out = this->last->info;
        delete this->last; //удаляем последний

        this->last = this->first = NULL;
        return out;
    }
    ProviderElement* del = this->last;
    Provider* out = this->last->info;
    this->last = this->last->next;
    delete del;
    this->last->previous = NULL;
    return out;
}

//---------------------------------------------------------------------------------------------

//bool ProviderContainer::pop(string name)//удаление элемента с заданным значением
//{
//    ProviderElem* tempObject = this->back; //присваивание временной переменной последний элемент очереди
//    while (tempObject)
//    {
//        if ((tempObject->data->getCut() == name) || (tempObject->data->getWithRoot() == name))
//        {
//            ProviderElem* del = tempObject;
//            if (tempObject->prev) //если есть предыдущий элемент
//                tempObject->prev->next = tempObject->next;//переставляем курсор на следующий
//            if (tempObject->next)
//                tempObject->next = tempObject->prev;
//            delete del->data;
//            delete del;
//            return true;
//        }
//        else
//            tempObject = tempObject->next;
//    }
//    return false;
//}

bool ProviderContainer::popElement(string name)
{
    ProviderElement* tempObject = this->last;
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

//---------------------------------------------------------------------------------------------

void ProviderContainer::clearContainer(void)
{
    while (this->last)
        delete this->popBack();
}

//---------------------------------------------------------------------------------------------

Provider* ProviderContainer::findElement(string name)//поиск по заданому параметру
{
    ProviderElement* tempObject = this->last;
    while (tempObject)
        if (tempObject->info->getName() == name)
            return tempObject->info;
        else
            tempObject = tempObject->next;
    return NULL;
}

//---------------------------------------------------------------------------------------------

ProviderIterator::ProviderIterator(ProviderContainer* obj) : object(obj), iterator(obj->getLast()) {}

//---------------------------------------------------------------------------------------------

ProviderElement* ProviderIterator::getBeginContainer(void)
{
    return getObject()->getLast();
}

//---------------------------------------------------------------------------------------------

Provider* ProviderIterator::getIterator(void) //текущая информация
{
    return iterator->info;
}

//---------------------------------------------------------------------------------------------

bool ProviderIterator::isEndContainer(void) //проверка на конец очереди
{
    return iterator == NULL;
}

//---------------------------------------------------------------------------------------------

void ProviderIterator::nextElement(void) //функция для перехода к следующему єлементу
{
    iterator = iterator->next;
}

//---------------------------------------------------------------------------------------------
