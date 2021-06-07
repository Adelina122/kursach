#include "SellerIterator.h"
#include "Seller.h"

SellerContainer::SellerContainer() : last(NULL), first(NULL) {} //����������� ��� ����������

SellerContainer::~SellerContainer()
{
    this->clearContainer();
}

//SellerContainer::getLast()
//{
//    return 
//}

void SellerContainer::pushBack(Seller* obj) //�������� ������� � ����� �������
{
    SellerElement* temporary = new SellerElement;

    temporary->info = obj; //����������� ������ �������� �������� ���������
    temporary->previous = NULL; //

    if (!this->last) //���� �� �����
    {
        this->last = this->first = temporary; //������� ������� �� ������ �������� temp
        temporary->next = NULL; //��������� �� ��������� ������� ������� � 1 ��
    }
    else //���� ������� �� ������� �� 1 ��������
    {
        temporary->next = this->last; //
        this->last->previous = temporary;
        this->last = temporary;
    }
}

Seller* SellerContainer::popBack(void) //������� ��������� �������
{
    if (!this->last) //���� ������� ������ - ���������� ��������� �� �����������
        return NULL;

    if (!this->last->next) //���� ������� ������� �� 1 ��������
    {
        Seller* out = this->last->info;
        delete this->last; //������� ���������

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

//bool SellerContainer::pop(string name) //�������� �������� � �������� ���������
//{
//    SellerElem* tempObject = this->back; //������������ ��������� ���������� ��������� ������� �������
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

bool SellerContainer::popElement(string name)//�������� �������� � �������� ���������
{
    SellerElement* tempObject = this->last; //������������ ��������� ���������� ���������
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

Seller* SellerContainer::findElement(string name)//����� �� �������� ���������
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

Seller* SellerIterator::getIterator(void) //������� ����������
{
    return iterator->info;
}

bool SellerIterator::isEndContainer(void) //�������� �� ����� �������
{
    return iterator == NULL;
}

void SellerIterator::nextElement(void) //������� ��� �������� � ���������� ��������
{
    iterator = iterator->next;
}
//---------------------------------------------------------------------------------------------