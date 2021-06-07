#include "ProviderIterator.h"
#include "Provider.h"

ProviderContainer::ProviderContainer(void) : last(NULL), first(NULL) {} //����������� ��� ����������

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

void ProviderContainer::pushBack(Provider* obj) //�������� ������� � ����� �������
{
    ProviderElement* temporary = new ProviderElement;

    temporary->info = obj; //����������� ������ �������� �������� ���������
    temporary->previous = NULL; //

    if (!this->last) //���� �� �����
    {
        this->last = this->first = temporary; //������� ������� �� ������ �������� temp
        temporary->next = NULL; //��������� �� ��������� ������� ������� � 1 ��
    }
    else //���� ������� �� ������� �� 1 ��������
    {
        if (this->last->previous) //���� �� �����
        {
            temporary->next = this->last; //
            this->last->previous = temporary;
            this->last = temporary;
        }
    }
}

//---------------------------------------------------------------------------------------------

Provider* ProviderContainer::popBack(void) //������� ��������� �������
{
    if (!this->last) //���� ������� ������ - ���������� ��������� �� �����������
        return NULL;

    if (!this->last->next) //���� ������� ������� �� 1 ��������
    {
        Provider* out = this->last->info;
        delete this->last; //������� ���������

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

//bool ProviderContainer::pop(string name)//�������� �������� � �������� ���������
//{
//    ProviderElem* tempObject = this->back; //������������ ��������� ���������� ��������� ������� �������
//    while (tempObject)
//    {
//        if ((tempObject->data->getCut() == name) || (tempObject->data->getWithRoot() == name))
//        {
//            ProviderElem* del = tempObject;
//            if (tempObject->prev) //���� ���� ���������� �������
//                tempObject->prev->next = tempObject->next;//������������ ������ �� ���������
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

Provider* ProviderContainer::findElement(string name)//����� �� �������� ���������
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

Provider* ProviderIterator::getIterator(void) //������� ����������
{
    return iterator->info;
}

//---------------------------------------------------------------------------------------------

bool ProviderIterator::isEndContainer(void) //�������� �� ����� �������
{
    return iterator == NULL;
}

//---------------------------------------------------------------------------------------------

void ProviderIterator::nextElement(void) //������� ��� �������� � ���������� ��������
{
    iterator = iterator->next;
}

//---------------------------------------------------------------------------------------------
