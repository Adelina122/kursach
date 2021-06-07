#pragma once
#include "SellerIterator.h"
using namespace std;

class Administrator //производный класс
{ //поля
protected:
    SellerContainer sellers; //объекты класса-контейнера SellerContainer
    SellerContainer typeFlowers; //продавцы, тип цветов 
    SellerContainer providers; //и поставщики

public: //методы
    Administrator(string name); //конструктор с параметрами
    ~Administrator(void); //деструктор
    void addSeller(Seller* seller); //добавляет продавца
    int deleteSeller(string name); //удаляет продавца
    void addTypeOfFlowers(Seller* typeOfFlowers); //добавляет тип цветов
    void sellersToComboBox(ComboBox^ comboBox); //отправляет данные о продавцах в комбоБокс
    void typeOfFlowersToComboBox(ComboBox^ comboBox); //отправляет данные о типе цветов в комбоБокс
    void clearSellers(void); //очищает очередь продавцов
    Seller* findSeller(string name); //поиск заданного продавца по имени
    const SellerContainer& getSellerContainer(void) const; //возвращает значение объекта с очереди
    const SellerContainer& getTypeContainer(void) const; //возвращает значение объекта с очереди
};
