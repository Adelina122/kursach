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

class SellerName //базовый класс
{
protected: //поля
    string name; //имя
public: //методы
    SellerName(string name); //конструктор с параметрами
};

//---------------------------------------------------------------------------------------------

class Seller : public SellerName
{ //поля
protected:
    FlowersContainer flowers; //объект класса-контейнера FlowersContainer
    string typeOfFlowers; //тип цветов
public: //методы
    Seller(void); //конструктор без параметров
    Seller(string name, string typeOfFlowers); //конструктор с параметрами
    ~Seller(); //деструктоп
    //геттеры
    string getName(void) const; //возвращает имя продавца
    string getTypeOfFlowers(void) const; //возвращает тип цветов
    //сеттер и методы
    void setTypeOfFlowers(const string typeOfFlowers); //устанавливает тип цветов
    void addFlowers(Flowers* flow); //добавляет цветы
    int deleteFlowers(string flow); //удаляет цветы
    Flowers* findFlowers(string flow); //ищет заданное название цветов
    const FlowersContainer& getFlowersContainer(void) const; //возвращает значение объект FlowersContainer
    void flowersToComboBox(ComboBox^ comboBox); //отправляет полученные данные в комбоБокс
};

//---------------------------------------------------------------------------------------------

//struct SellerElem //для хранения указателей
//{
//    Seller* data;
//    SellerElem* prev;
//    SellerElem* next;
//};
//
//class SellerContainer
//{
//public:
//    SellerElem* back; //конец очереди
//    SellerElem* front; //начало очереди
//
//    SellerContainer(void); //конструктор без параметров
//    ~SellerContainer(void); //деструктор
//
//    void push_back(Seller* obj); //добавить элемент в конец очереди
//    Seller* pop_back(void); //удалить последний элемент
//    bool pop(string name); //удаление элемента с заданным значением
//    void clear(void); //очистка очереди
//    Seller* find(string name); //поиск по заданому параметру
//};
//
//class SellerContainerIterator //класс-итератор
//{
//    const SellerContainer* obj;
//    SellerElem* iter;
//
//public:
//    SellerContainerIterator(const SellerContainer* obj);
//    SellerElem* begin(void);
//    Seller* getIter(void); //текущая информация
//    bool isEnd(void); //проверка на конец очереди
//    void next(void); //функция для перехода к следующему єлементу
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