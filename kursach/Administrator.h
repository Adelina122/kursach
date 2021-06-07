#pragma once
#include "SellerIterator.h"
using namespace std;

class Administrator //����������� �����
{ //����
protected:
    SellerContainer sellers; //������� ������-���������� SellerContainer
    SellerContainer typeFlowers; //��������, ��� ������ 
    SellerContainer providers; //� ����������

public: //������
    Administrator(string name); //����������� � �����������
    ~Administrator(void); //����������
    void addSeller(Seller* seller); //��������� ��������
    int deleteSeller(string name); //������� ��������
    void addTypeOfFlowers(Seller* typeOfFlowers); //��������� ��� ������
    void sellersToComboBox(ComboBox^ comboBox); //���������� ������ � ��������� � ���������
    void typeOfFlowersToComboBox(ComboBox^ comboBox); //���������� ������ � ���� ������ � ���������
    void clearSellers(void); //������� ������� ���������
    Seller* findSeller(string name); //����� ��������� �������� �� �����
    const SellerContainer& getSellerContainer(void) const; //���������� �������� ������� � �������
    const SellerContainer& getTypeContainer(void) const; //���������� �������� ������� � �������
};
