#pragma once
#include "Seller.h"

using namespace std;

struct SellerElement //��� �������� ����������
{
    Seller* info; //������
    SellerElement* previous; //���������� �������
    SellerElement* next; //��������� �������
};

class SellerContainer //�����-��������� ��� ��������� �������� �������� �������
{
public: //����
    SellerElement* last; //����� �������
    SellerElement* first; //������ �������
public: //������
    SellerContainer(void); //����������� ��� ����������
    ~SellerContainer(void); //����������
    void getLast();
    bool popElement(string name); //�������� �������� � �������� ���������
    void pushBack(Seller* obj); //�������� ������� � ����� �������
    void clearContainer(void); //������� �������
    Seller* findElement(string name); //����� �� �������� ���������
    Seller* popBack(void); //������� ��������� �������
};

class SellerIterator //�����-�������� ��� ������ ��������� ����������
{ //����
    const SellerContainer* object; //������ ���� SellerContainer
    SellerElement* iterator; //������ ��������� SellerElement
public: //������
    SellerIterator(const SellerContainer* obj); //����������� �����������
    bool isEndContainer(void); //�������� �� ����� �������
    void nextElement(void); //������� ��� �������� � ���������� ��������
    SellerElement* getBeginContainer(void); //���������� ������ �������
    Seller* getIterator(void); //���������� ������� ����������
};

//---------------------------------------------------------------------------------------------
