#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

//---------------------------------------------------------------------------------------------

class Provider //����� ���������
{ //���� ������
protected: //��� ����� ����������
    string typeOfFlowers; //��� ������
    string name; //�������� ������
    string country; //������-���������
public: //������
    Provider(void); //����������� ��� ����������
    Provider(string typeOfFlowers, string name, string country); //����������� � �����������
    //�������
    string getTypeOfFlowers(void) const; //���������� ��� ������
    string getName(void) const; //���������� �������� ������
    string getCountry(void) const; //���������� ������-����������
};

//---------------------------------------------------------------------------------------------

//struct ProviderElem //��� �������� ����������
//{
//    Provider* data;
//    ProviderElem* prev;
//    ProviderElem* next;
//};
//
////---------------------------------------------------------------------------------------------
//
//class ProviderContainer
//{
//public:
//    ProviderElem* back; //����� �������
//    ProviderElem* front; //������ �������
//
//    ProviderContainer(void); //����������� ��� ����������
//    ~ProviderContainer(void); //����������
//
//    void push_back(Provider* obj); //�������� ������� � ����� �������
//    Provider* pop_back(void); //������� ��������� �������
//    bool pop(string name); //�������� �������� � �������� ���������
//    void clear(void); //������� �������
//    Provider* find(string name); //����� �� �������� ���������
//};
//
//class ProviderContainerIterator
//{
//    const ProviderContainer* obj; //
//    ProviderElem* iter; //������ ���������
//
//public:
//    ProviderContainerIterator(const ProviderContainer* obj);
//
//    ProviderElem* begin(void);
//
//    Provider* getIter(void); //������� ����������
//
//    bool isEnd(void); //�������� �� ����� �������
//
//    void next(void); //������� ��� �������� � ���������� ��������
//};
Provider* getProviderObject(string typeOfFlowers, string name, string country); //��� ������ ������� ������ �� �������� � ��������
//---------------------------------------------------------------------------------------------

class Cut : public Provider //�����-��������� ���������� �����
{
public: //������
    //����������� � �����������
    Cut(string name, string country);
};

//---------------------------------------------------------------------------------------------

class WithRoot : public Provider //�����-��������� ����� � ������
{
public: //������
    //����������� � �����������
    WithRoot(string name, string country);
};

//---------------------------------------------------------------------------------------------

