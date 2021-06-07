#include "Provider.h"


//ProviderContainer::ProviderContainer(void) : back(NULL), front(NULL) {} //конструктор без параметров
//
//ProviderContainer::~ProviderContainer(void)
//{
//    this->clear();
//}
//
//void ProviderContainer::push_back(Provider* obj) //добавить элемент в конец очереди
//{
//    ProviderElem* temp = new ProviderElem;
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
//        if (this->back->prev) //если не конец
//        {
//            temp->next = this->back; //
//            this->back->prev = temp;
//            this->back = temp;
//        }
//    }
//}
//
//Provider* ProviderContainer::pop_back(void) //удалить последний элемент
//{
//    if (!this->back) //если очередь пустая - возвращаем указатель на нульпоинтер
//        return NULL;
//
//    if (!this->back->next) //если очередь состоит из 1 элемента
//    {
//        Provider* out = this->back->data;
//        delete this->back; //удаляем последний
//
//        this->back = this->front = NULL;
//        return out;
//    }
//    ProviderElem* del = this->back;
//    Provider* out = this->back->data;
//    this->back = this->back->next;
//    delete del;
//    this->back->prev = NULL;
//    return out;
//}
//
////bool ProviderContainer::pop(string name)//удаление элемента с заданным значением
////{
////    ProviderElem* tempObject = this->back; //присваивание временной переменной последний элемент очереди
////    while (tempObject)
////    {
////        if ((tempObject->data->getCut() == name) || (tempObject->data->getWithRoot() == name))
////        {
////            ProviderElem* del = tempObject;
////            if (tempObject->prev) //если есть предыдущий элемент
////                tempObject->prev->next = tempObject->next;//переставляем курсор на следующий
////            if (tempObject->next)
////                tempObject->next = tempObject->prev;
////            delete del->data;
////            delete del;
////            return true;
////        }
////        else
////            tempObject = tempObject->next;
////    }
////    return false;
////}
//
//bool ProviderContainer::pop(string name)
//{
//    ProviderElem* tempObject = this->back;
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
//void ProviderContainer::clear(void)
//{
//    while (this->back) 
//        delete this->pop_back();
//}
//
//Provider* ProviderContainer::find(string name)//поиск по заданому параметру
//{
//    ProviderElem* tempObject = this->back;
//    while (tempObject)
//        if (tempObject->data->getName/*getName*/() == name)
//            return tempObject->data;
//        else
//            tempObject = tempObject->next;
//    return NULL;
//}
//
//ProviderContainerIterator::ProviderContainerIterator(const ProviderContainer* obj) : obj(obj), iter(obj->back) {}
//
//ProviderElem* ProviderContainerIterator::begin(void)
//{
//    return obj->back;
//}
//
//Provider* ProviderContainerIterator::getIter(void) //текущая информация
//{
//    return iter->data;
//}
//
//bool ProviderContainerIterator::isEnd(void) //проверка на конец очереди
//{
//    return iter == NULL;
//}
//
//void ProviderContainerIterator::next(void) //функция для перехода к следующему єлементу
//{
//    iter = iter->next;
//}
//
////---------------------------------------------------------------------------------------------

Provider::Provider(void) {} //конструктор без параметров

Provider::Provider(string typeOfFlowers, string name, string country) :typeOfFlowers(typeOfFlowers), name(name), country(country) {}

string Provider::getName(void) const
{
    return name;
}

string Provider::getCountry(void) const
{
    return country;
}

string Provider::getTypeOfFlowers(void) const
{
    return typeOfFlowers;
}

//---------------------------------------------------------------------------------------------

Cut::Cut(string name, string country) :Provider("Cut", name, country) {}

//---------------------------------------------------------------------------------------------

WithRoot::WithRoot(string name, string country) : Provider("WithRoot", name, country) {}

//---------------------------------------------------------------------------------------------

Provider* getProviderObject(string typeOfFlowers, string name, string country) //для выбора нужного класса по названию и создания
{
    if (typeOfFlowers == "WithRoot")
        return new WithRoot(name, country);
    else if (typeOfFlowers == "Cut")
        return new Cut(name, country);
    else
        return NULL;
}