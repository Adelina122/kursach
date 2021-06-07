#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include "ProviderIterator.h"

using namespace std;

//---------------------------------------------------------------------------------------------

class Flowers //������� ����� �����
{
protected: //����
    string name; //�������� ������
    string typeOfFlowers; //��� ������
    string season; //����� ��������
    string colour; //����
    string sort; //����
    int price; //����
    string growingRoom; //��������� ��� �����������
    ProviderContainer providers; //������ ���� ProviderContainer
public: //������
    Flowers(void); //����������� ��� ����������
    //����������� � �����������
    Flowers(string typeOfFlowers, string name, string sort, string season, string colour, int price, string growingRoom);
    ~Flowers(void); //����������
    const ProviderContainer& getProviderContainer(void) const; //���������� �������� ������� � ������� 
    //�������(�������� ������ ������)
    virtual string getName(void) const; //���������� �������� ������
    virtual string getTypeOfFlowers(void) const; //���������� ��� ������ 
    virtual string getSeason(void) const; //���������� ����� ��������
    virtual string getColour(void) const; //���������� ����
    virtual string getSort(void) const; //���������� ����
    virtual int getPrice(void) const; //���������� ����
    virtual string getGrowingRoom(void) const; //���������� ���������

    //�������
    virtual void setSeason(const string season); //������������� �������� ������
    virtual void setColour(const string colour); //������������� ����
    virtual void setSort(const string sort); //������������� ����
    virtual void setPrice(const int price); //������������� ����
    virtual void setGrowingRoom(const string growingRoom); //������������� ���������
    void addProvider(Provider* provider); //��������� ����������
    bool deleteProvider(string provider); //������� ����������
};

//---------------------------------------------------------------------------------------------

Flowers* getFlowersObject(string typeOfFlowers, string name, string sort, string season, string colour, int price, string growingRoom);

//---------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------
//struct FlowersElem //��� �������� ����������
//{
//    Flowers* data;
//    FlowersElem* prev;
//    FlowersElem* next;
//};
//
//class FlowersContainer
//{
//public:
//    FlowersElem* back; //����� �������
//    FlowersElem* front; //������ �������
//
//    FlowersContainer(); //����������� ��� ����������
//    ~FlowersContainer(); //����������
//
//    void push_back(Flowers* obj); //�������� ������� � ����� �������
//    Flowers* pop_back(void); //������� ��������� �������
//    bool pop(string name); //�������� �������� � �������� ���������
//    void clear(void); //������� �������
//    Flowers* find(string name); //����� �� �������� ���������
//
//    friend class FlowersContainerIterator;
//
//};
//
//class FlowersContainerIterator //�����-��������
//{
//    const FlowersContainer* obj; //
//    FlowersElem* iter; //������ ���������
//
//public:
//    FlowersContainerIterator(const FlowersContainer* obj);
//
//    FlowersElem* begin(void);
//
//    Flowers* getIter(void); //������� ����������
//
//    bool isEnd(void); //�������� �� ����� �������
//
//    void next(void); //������� ��� �������� � ���������� ��������
//};
//
////---------------------------------------------------------------------------------------------

class CutFlowers : public Flowers //�����-��������� ���������� �����
{
public: //������
    //����������� � �����������
    CutFlowers(string name, string sort, string season, string colour, int price, string growingRoom);
};

//---------------------------------------------------------------------------------------------

class FlowersWithRoot : public Flowers  //�����-��������� ����� � ������
{
public: //������
    //����������� � �����������
    FlowersWithRoot(string name, string sort, string season, string colour, int price, string growingRoom);
};

//---------------------------------------------------------------------------------------------



