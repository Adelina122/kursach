#pragma once
#include "Flowers.h"
using namespace std;

struct FlowersElement //��� �������� ����������
{
    Flowers* info; //������
    FlowersElement* previous; //���������� �������
    FlowersElement* next; //��������� �������
};

class FlowersContainer
{
public: //����
    FlowersElement* last; //����� �������
    FlowersElement* first; //������ �������
public: //������
    FlowersContainer(); //����������� ��� ����������
    ~FlowersContainer(); //����������
    Flowers* findElement(string name); //����� �� �������� ���������
    Flowers* popBack(void); //������� ��������� �������
    bool popElement(string name); //�������� �������� � �������� ���������
    void clearContainer(void); //������� �������
    void pushBack(Flowers* obj); //�������� ������� � ����� �������
    friend class FlowersIterator;
};

class FlowersIterator //�����-��������
{ //����
    const FlowersContainer* object; //������ ������-���������� FlowersContainer
    FlowersElement* iterator; //������ ��������� FlowersElement
public: //������
    FlowersIterator(FlowersContainer* obj); //����������� �����������
    bool isEndContainer(void); //�������� �� ����� �������
    void nextElement(void); //������� ��� �������� � ���������� ��������
    FlowersElement* getBeginContainer(void); //���������� ������ �������
    Flowers* getIterator(void); //���������� ������� ����������
};

//---------------------------------------------------------------------------------------------


