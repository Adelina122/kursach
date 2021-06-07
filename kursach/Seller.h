#pragma once

#include "FlowersIterator.h"

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <windows.h>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace std;

//---------------------------------------------------------------------------------------------

class SellerName //������� �����
{
protected: //����
    string name; //���
public: //������
    SellerName(string name); //����������� � �����������
};

//---------------------------------------------------------------------------------------------

class Seller : public SellerName
{ //����
protected:
    FlowersContainer flowers; //������ ������-���������� FlowersContainer
    string typeOfFlowers; //��� ������
public: //������
    Seller(void); //����������� ��� ����������
    Seller(string name, string typeOfFlowers); //����������� � �����������
    ~Seller(); //����������
    //�������
    string getName(void) const; //���������� ��� ��������
    string getTypeOfFlowers(void) const; //���������� ��� ������
    //������ � ������
    void setTypeOfFlowers(const string typeOfFlowers); //������������� ��� ������
    void addFlowers(Flowers* flow); //��������� �����
    int deleteFlowers(string flow); //������� �����
    Flowers* findFlowers(string flow); //���� �������� �������� ������
    const FlowersContainer& getFlowersContainer(void) const; //���������� �������� ������ FlowersContainer
    void flowersToComboBox(ComboBox^ comboBox); //���������� ���������� ������ � ���������
};

//---------------------------------------------------------------------------------------------

//struct SellerElem //��� �������� ����������
//{
//    Seller* data;
//    SellerElem* prev;
//    SellerElem* next;
//};
//
//class SellerContainer
//{
//public:
//    SellerElem* back; //����� �������
//    SellerElem* front; //������ �������
//
//    SellerContainer(void); //����������� ��� ����������
//    ~SellerContainer(void); //����������
//
//    void push_back(Seller* obj); //�������� ������� � ����� �������
//    Seller* pop_back(void); //������� ��������� �������
//    bool pop(string name); //�������� �������� � �������� ���������
//    void clear(void); //������� �������
//    Seller* find(string name); //����� �� �������� ���������
//};
//
//class SellerContainerIterator //�����-��������
//{
//    const SellerContainer* obj;
//    SellerElem* iter;
//
//public:
//    SellerContainerIterator(const SellerContainer* obj);
//    SellerElem* begin(void);
//    Seller* getIter(void); //������� ����������
//    bool isEnd(void); //�������� �� ����� �������
//    void next(void); //������� ��� �������� � ���������� ��������
//};
//
////---------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------


//class Rukovoditel
//{
//    SellerContainer sellers;
//    SellerContainer typeFlowers;
//    SellerContainer newProvider;
//
//public:
//    Rukovoditel(string name);
//
//    ~Rukovoditel(void);
//
//    void clearSellers(void);
//
//    void addSeller(Seller* fermer);
//
//    void addTypeOfFlowers(Seller* typeOfFlowers);
//
//    int deleteSeller(string name);
//
//    //void addProvider(Seller* prov);
//
//    Seller* findSeller(string name);
//
//    const SellerContainer& getSellerContainer(void) const;
//
//    const SellerContainer& getTypeContainer(void) const;
//
//    void sellersToComboBox(ComboBox^ comboBox);
//
//    void typeOfFlowersToComboBox(ComboBox^ comboBox);
//};