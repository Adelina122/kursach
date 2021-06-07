#include "Flowers.h"

//FlowersContainer::FlowersContainer(void) : back(NULL), front(NULL) {} //конструктор без параметров
//
//FlowersContainer::~FlowersContainer(void)
//{
//    this->clear();
//}
//
//void FlowersContainer::push_back(Flowers* obj) //добавить элемент в конец очереди
//{
//    FlowersElem* temp = new FlowersElem;
//
//    temp->data = obj; //присваиваем первое значение заданому параметру
//    temp->prev = NULL; //
//
//    if (!this->back) //если не конец
//    {
//        this->back = this->front = temp; //очереть состоит из одного єлемента temp
//        temp->next = NULL; //указатель на следующий элемент очереди с 1 эл
//    }
//    else //если очередь не состоит из 1 элемента
//    {
//        temp->next = this->back; //
//        this->back->prev = temp;
//        this->back = temp;
//    }
//}
//
//Flowers* FlowersContainer::pop_back(void) //удалить последний элемент
//{
//    if (!this->back) //если очередь пустая - возвращаем указатель на нульпоинтер
//        return NULL;
//
//    if (!this->back->next) //если очередь состоит из 1 элемента
//    {
//        Flowers* out = this->back->data;
//        delete this->back; //удаляем последний
//
//        this->back = this->front = NULL;
//        return out;
//    }
//    FlowersElem* del = this->back;
//    Flowers* out = this->back->data;
//    this->back = this->back->next;
//    delete del;
//    this->back->prev = NULL;
//    return out;
//}
//
////bool FlowersContainer::pop(string name) //удаление элемента с заданным значением
////{
////    FlowersElem* tempObject = this->back; //присваивание временной переменной последний элемент очереди
////    while (tempObject)
////        if (tempObject->data->getName() == name)
////        {
////            FlowersElem* del = tempObject;
////            if (tempObject->prev)
////                tempObject->prev->next = tempObject->next;
////            if (tempObject->next)
////                tempObject->next = tempObject->prev;
////            delete del->data;
////            delete del;
////            return true;
////        }
////        else
////            tempObject = tempObject->next;
////    return false;
////}
//
//bool FlowersContainer::pop(string name)
//{
//    FlowersElem* tempObject = this->back;
//    while (tempObject)
//        if (tempObject->data->getName() == name)
//        {
//            if (!(this->back->next || this->back->prev))
//                this->back = NULL;
//            if (tempObject->prev)
//                tempObject->prev->next = tempObject->next;
//            if (tempObject->next)
//                tempObject->next->prev = tempObject->prev;
//            if (tempObject == this->back)
//                this->back = tempObject->next;
//            delete tempObject->data;
//            delete tempObject;
//            return true;
//        }
//        else
//            tempObject = tempObject->next;
//    return false;
//}
//
//void FlowersContainer::clear(void)
//{
//    while (this->back)
//        delete this->pop_back();
//}
//
//Flowers* FlowersContainer::find(string name)//поиск по заданому параметру
//{
//    FlowersElem* tempObject = this->back;
//    while (tempObject)
//        if (tempObject->data->getName() == name)
//            return tempObject->data;
//        else
//            tempObject = tempObject->next;
//    return NULL;
//}
//
//FlowersContainerIterator::FlowersContainerIterator(const FlowersContainer* obj) : obj(obj), iter(obj->back) {}
//
//FlowersElem* FlowersContainerIterator::begin(void)
//{
//    return obj->back;
//}
//
//Flowers* FlowersContainerIterator::getIter(void) //текущая информация
//{
//    return iter->data;
//}
//
//bool FlowersContainerIterator::isEnd(void) //проверка на конец очереди
//{
//    return iter == NULL;
//}
//
//void FlowersContainerIterator::next(void) //функция для перехода к следующему єлементу
//{
//    iter = iter->next;
//}
//
////---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------

Flowers::Flowers(void) {}

Flowers::~Flowers(void)
{
    providers.clearContainer();
}

Flowers::Flowers(string typeOfFlowers, string name, string sort, string season, string colour, int price, string growingRoom) :
    typeOfFlowers(typeOfFlowers), name(name), sort(sort), season(season), colour(colour), price(price), growingRoom(growingRoom) {}
//---------------------------------------------------------------------------------------------

string Flowers::getName(void) const
{
    return name;
}

//---------------------------------------------------------------------------------------------

string Flowers::getTypeOfFlowers(void) const
{
    return typeOfFlowers;
}

//---------------------------------------------------------------------------------------------

string Flowers::getSeason(void) const
{
    return season;
}

//---------------------------------------------------------------------------------------------

string Flowers::getColour(void) const
{
    return colour;
}

//---------------------------------------------------------------------------------------------

string Flowers::getSort(void) const
{
    return sort;
}

//---------------------------------------------------------------------------------------------

int Flowers::getPrice(void) const
{
    return price;
}

//---------------------------------------------------------------------------------------------

string Flowers::getGrowingRoom(void) const
{
    return growingRoom;
}

//---------------------------------------------------------------------------------------------

void Flowers::setSeason(const string season)
{
    this->season = season;
}

//---------------------------------------------------------------------------------------------

void Flowers::setColour(const string colour)
{
    this->colour = colour;
}

//---------------------------------------------------------------------------------------------

void Flowers::setSort(const string sort)
{
    this->sort = sort;
}

//---------------------------------------------------------------------------------------------

void Flowers::setPrice(const int price)
{
    this->price = price;
}

//---------------------------------------------------------------------------------------------

void Flowers::setGrowingRoom(const string growingRoom)
{
    this->growingRoom = growingRoom;
}

//---------------------------------------------------------------------------------------------

void Flowers::addProvider(Provider* provider)
{
    providers.pushBack(provider);
}

//---------------------------------------------------------------------------------------------

bool Flowers::deleteProvider(string provider)
{
    return providers.popElement(provider);
}

//---------------------------------------------------------------------------------------------

const ProviderContainer& Flowers::getProviderContainer(void) const
{
    return providers;
}

//---------------------------------------------------------------------------------------------

Flowers* getFlowersObject(string typeOfFlowers, string name, string sort, string season, string colour, int price, string growingRoom)
{
    if (typeOfFlowers == "Cut")
        return new CutFlowers(name, sort, season, colour, price, growingRoom);
    else if (typeOfFlowers == "WithRoot")
        return new FlowersWithRoot(name, sort, season, colour, price, growingRoom);
    else
        return NULL;
}

//---------------------------------------------------------------------------------------------

CutFlowers::CutFlowers(string name, string sort, string season, string colour, int price, string growingRoom) :
    Flowers("Cut", name, sort, season, colour, price, growingRoom) {}

//---------------------------------------------------------------------------------------------

FlowersWithRoot::FlowersWithRoot(string name, string sort, string season, string colour, int price, string growingRoom) :
    Flowers("WithRoot", name, sort, season, colour, price, growingRoom) {}

//---------------------------------------------------------------------------------------------



