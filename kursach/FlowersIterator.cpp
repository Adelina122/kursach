#include "FlowersIterator.h"
#include "Flowers.h"

FlowersContainer::FlowersContainer(void) : last(NULL), first(NULL) {} //����������� ��� ����������

FlowersContainer::~FlowersContainer(void)
{
    this->clearContainer();
}

void FlowersContainer::pushBack(Flowers* obj) //�������� ������� � ����� �������
{
    FlowersElement* temporary = new FlowersElement;

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

Flowers* FlowersContainer::popBack(void) //������� ��������� �������
{
    if (!this->last) //���� ������� ������ - ���������� ��������� �� �����������
        return NULL;

    if (!this->last->next) //���� ������� ������� �� 1 ��������
    {
        Flowers* out = this->last->info;
        delete this->last; //������� ���������

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

//bool FlowersContainer::pop(string name) //�������� �������� � �������� ���������
//{
//    FlowersElem* tempObject = this->back; //������������ ��������� ���������� ��������� ������� �������
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

Flowers* FlowersContainer::findElement(string name)//����� �� �������� ���������
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

Flowers* FlowersIterator::getIterator(void) //������� ����������
{
    return iterator->info;
}

bool FlowersIterator::isEndContainer(void) //�������� �� ����� �������
{
    return iterator == NULL;
}

void FlowersIterator::nextElement(void) //������� ��� �������� � ���������� ��������
{
    iterator = iterator->next;
}

//---------------------------------------------------------------------------------------------