#include "Provider.h"


//ProviderContainer::ProviderContainer(void) : back(NULL), front(NULL) {} //����������� ��� ����������
//
//ProviderContainer::~ProviderContainer(void)
//{
//    this->clear();
//}
//
//void ProviderContainer::push_back(Provider* obj) //�������� ������� � ����� �������
//{
//    ProviderElem* temp = new ProviderElem;
//
//    temp->data = obj; //����������� ������ �������� �������� ���������
//    temp->prev = NULL; //
//
//    if (!this->back) //���� �� �����
//    {
//        this->back = this->front = temp; //������� ������� �� ������ �������� temp
//        temp->next = NULL; //��������� �� ��������� ������� ������� � 1 ��
//    }
//    else //���� ������� �� ������� �� 1 ��������
//    {
//        if (this->back->prev) //���� �� �����
//        {
//            temp->next = this->back; //
//            this->back->prev = temp;
//            this->back = temp;
//        }
//    }
//}
//
//Provider* ProviderContainer::pop_back(void) //������� ��������� �������
//{
//    if (!this->back) //���� ������� ������ - ���������� ��������� �� �����������
//        return NULL;
//
//    if (!this->back->next) //���� ������� ������� �� 1 ��������
//    {
//        Provider* out = this->back->data;
//        delete this->back; //������� ���������
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
////bool ProviderContainer::pop(string name)//�������� �������� � �������� ���������
////{
////    ProviderElem* tempObject = this->back; //������������ ��������� ���������� ��������� ������� �������
////    while (tempObject)
////    {
////        if ((tempObject->data->getCut() == name) || (tempObject->data->getWithRoot() == name))
////        {
////            ProviderElem* del = tempObject;
////            if (tempObject->prev) //���� ���� ���������� �������
////                tempObject->prev->next = tempObject->next;//������������ ������ �� ���������
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
//Provider* ProviderContainer::find(string name)//����� �� �������� ���������
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
//Provider* ProviderContainerIterator::getIter(void) //������� ����������
//{
//    return iter->data;
//}
//
//bool ProviderContainerIterator::isEnd(void) //�������� �� ����� �������
//{
//    return iter == NULL;
//}
//
//void ProviderContainerIterator::next(void) //������� ��� �������� � ���������� ��������
//{
//    iter = iter->next;
//}
//
////---------------------------------------------------------------------------------------------

Provider::Provider(void) {} //����������� ��� ����������

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

Provider* getProviderObject(string typeOfFlowers, string name, string country) //��� ������ ������� ������ �� �������� � ��������
{
    if (typeOfFlowers == "WithRoot")
        return new WithRoot(name, country);
    else if (typeOfFlowers == "Cut")
        return new Cut(name, country);
    else
        return NULL;
}