#pragma once
#include "Provider.h"
using namespace std;

//---------------------------------------------------------------------------------------------

struct ProviderElement //��� �������� ����������
{
    Provider* info; //������
    ProviderElement* previous; //���������� �������
    ProviderElement* next; //��������� �������
};

//---------------------------------------------------------------------------------------------

class ProviderContainer //�����-��������� ��� ��������� �������� �������� �������
{
protected: //����
   // friend ProviderElement;
    ProviderElement* last; //����� �������
    ProviderElement* first; //������ �������
public: //������
    ProviderContainer(void); //����������� ��� ����������
    ~ProviderContainer(void); //����������
    ProviderElement* getLast();
    ProviderElement* getFirst();
    void clearContainer(void); //������� �������
    void pushBack(Provider* obj); //�������� ������� � ����� �������
    bool popElement(string name); //�������� �������� � �������� ���������
    Provider* findElement(string name); //����� �� �������� ���������
    Provider* popBack(void); //������� ��������� �������
};

//---------------------------------------------------------------------------------------------

class ProviderIterator //�����-�������� ��� ������ ��������� ������-����������
{ //����
protected:
    ProviderContainer* object; //������ ���� ProviderContainer
    ProviderElement* iterator; //������ ��������� ProviderElement
public: //������
    ProviderContainer* getObject();
    ProviderElement* getIter();
    bool isEndContainer(void); //�������� �� ����� �������
    void nextElement(void); //������� ��� �������� � ���������� ��������
    ProviderIterator(ProviderContainer* obj); //����������� �����������
    Provider* getIterator(void); //���������� ������� ����������
    ProviderElement* getBeginContainer(void); //���������� ������ �������
};
