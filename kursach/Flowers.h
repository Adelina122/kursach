#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include "ProviderIterator.h"

using namespace std;

//---------------------------------------------------------------------------------------------

class Flowers //базовый класс ЦВЕТЫ
{
protected: //поля
    string name; //название цветов
    string typeOfFlowers; //тип цветов
    string season; //сезон цветения
    string colour; //цвет
    string sort; //сорт
    int price; //цена
    string growingRoom; //помещение для выращивания
    ProviderContainer providers; //объект типа ProviderContainer
public: //методы
    Flowers(void); //конструктор без параметров
    //конструктор с параметрами
    Flowers(string typeOfFlowers, string name, string sort, string season, string colour, int price, string growingRoom);
    ~Flowers(void); //деструктор
    const ProviderContainer& getProviderContainer(void) const; //возвращает значение объекта с очереди 
    //Геттеры(открытые методы класса)
    virtual string getName(void) const; //возвращает название цветов
    virtual string getTypeOfFlowers(void) const; //возвращает тип цветов 
    virtual string getSeason(void) const; //возвращает сезон цветения
    virtual string getColour(void) const; //возвращает цвет
    virtual string getSort(void) const; //возвращает сорт
    virtual int getPrice(void) const; //возвращает цену
    virtual string getGrowingRoom(void) const; //возвращает помещение

    //Сеттеры
    virtual void setSeason(const string season); //устанавливает название цветов
    virtual void setColour(const string colour); //устанавливает цвет
    virtual void setSort(const string sort); //устанавливает сорт
    virtual void setPrice(const int price); //устанавливает цену
    virtual void setGrowingRoom(const string growingRoom); //устанавливает помещение
    void addProvider(Provider* provider); //добавляет поставщика
    bool deleteProvider(string provider); //удаляет поставщика
};

//---------------------------------------------------------------------------------------------

Flowers* getFlowersObject(string typeOfFlowers, string name, string sort, string season, string colour, int price, string growingRoom);

//---------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------
//struct FlowersElem //для хранения указателей
//{
//    Flowers* data;
//    FlowersElem* prev;
//    FlowersElem* next;
//};
//
//class FlowersContainer
//{
//public:
//    FlowersElem* back; //конец очереди
//    FlowersElem* front; //начало очереди
//
//    FlowersContainer(); //конструктор без параметров
//    ~FlowersContainer(); //деструктор
//
//    void push_back(Flowers* obj); //добавить элемент в конец очереди
//    Flowers* pop_back(void); //удалить последний элемент
//    bool pop(string name); //удаление элемента с заданным значением
//    void clear(void); //очистка очереди
//    Flowers* find(string name); //поиск по заданому параметру
//
//    friend class FlowersContainerIterator;
//
//};
//
//class FlowersContainerIterator //класс-итератор
//{
//    const FlowersContainer* obj; //
//    FlowersElem* iter; //объект структуры
//
//public:
//    FlowersContainerIterator(const FlowersContainer* obj);
//
//    FlowersElem* begin(void);
//
//    Flowers* getIter(void); //текущая информация
//
//    bool isEnd(void); //проверка на конец очереди
//
//    void next(void); //функция для перехода к следующему єлементу
//};
//
////---------------------------------------------------------------------------------------------

class CutFlowers : public Flowers //класс-наследник Обрезанные цветы
{
public: //методы
    //конструктор с параметрами
    CutFlowers(string name, string sort, string season, string colour, int price, string growingRoom);
};

//---------------------------------------------------------------------------------------------

class FlowersWithRoot : public Flowers  //класс-наследник Цветы с корнем
{
public: //методы
    //конструктор с параметрами
    FlowersWithRoot(string name, string sort, string season, string colour, int price, string growingRoom);
};

//---------------------------------------------------------------------------------------------



