#include "SellerIterator.h"
#include "Seller.h"

SellerContainer::SellerContainer() : last(NULL), first(NULL) {} //конструктор без параметров

SellerContainer::~SellerContainer()
{
    this->clearContainer();
}

//SellerContainer::getLast()
//{
//    return 
//}

void SellerContainer::pushBack(Seller* obj) //добавить элемент в конец очереди
{
    SellerElement* temporary = new SellerElement;

    temporary->info = obj; //присваиваем первое значение заданому параметру
    temporary->previous = NULL; //

    if (!this->last) //если не конец
    {
        this->last = this->first = temporary; //очереть состоит из одного Їлемента temp
        temporary->next = NULL; //указатель на следующий элемент очереди с 1 эл
    }
    else //если очередь не состоит из 1 элемента
    {
        temporary->next = this->last; //
        this->last->previous = temporary;
        this->last = temporary;
    }
}

Seller* SellerContainer::popBack(void) //удалить последний элемент
{
    if (!this->last) //если очередь пуста€ - возвращаем указатель на нульпоинтер
        return NULL;

    if (!this->last->next) //если очередь состоит из 1 элемента
    {
        Seller* out = this->last->info;
        delete this->last; //удал€ем последний

        this->last = this->first = NULL;
        return out;
    }
    SellerElement* deleteElement = this->last;
    Seller* out = this->last->info;
    this->last = this->last->next;
    delete deleteElement;
    this->last->previous = NULL;
    return out;
}

//bool SellerContainer::pop(string name) //удаление элемента с заданным значением
//{
//    SellerElem* tempObject = this->back; //присваивание временной переменной последний элемент очереди
//    while (tempObject)
//        if (tempObject->data->getName() == name)
//        {
//            SellerElem* del = tempObject;
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

bool SellerContainer::popElement(string name)//удаление элемента с заданным значением
{
    SellerElement* tempObject = this->last; //присваивание временной переменной последний
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

void SellerContainer::clearContainer(void)
{
    while (this->last)
        delete this->popBack();
}

Seller* SellerContainer::findElement(string name)//поиск по заданому параметру
{
    SellerElement* tempObject = this->last;
    while (tempObject)
        if (tempObject->info->getName() == name)
            return tempObject->info;
        else
            tempObject = tempObject->next;
    return NULL;
}

SellerIterator::SellerIterator(const SellerContainer* obj) : object(obj), iterator(obj->last) {}

SellerElement* SellerIterator::getBeginContainer(void) //
{
    return object->last;
}

Seller* SellerIterator::getIterator(void) //текуща€ информаци€
{
    return iterator->info;
}

bool SellerIterator::isEndContainer(void) //проверка на конец очереди
{
    return iterator == NULL;
}

void SellerIterator::nextElement(void) //функци€ дл€ перехода к следующему Їлементу
{
    iterator = iterator->next;
}
//---------------------------------------------------------------------------------------------