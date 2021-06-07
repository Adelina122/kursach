#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

//---------------------------------------------------------------------------------------------

class Provider //класс Поставщик
{ //поля класса
protected: //тип общих параметров
    string typeOfFlowers; //тип цветов
    string name; //название цветов
    string country; //страна-поставщик
public: //методы
    Provider(void); //конструктор без параметров
    Provider(string typeOfFlowers, string name, string country); //конструктор с параметрами
    //геттеры
    string getTypeOfFlowers(void) const; //возвращает тип цветов
    string getName(void) const; //возвращает название цветов
    string getCountry(void) const; //возвращает страну-поставщика
};

//---------------------------------------------------------------------------------------------

//struct ProviderElem //для хранения указателей
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
//    ProviderElem* back; //конец очереди
//    ProviderElem* front; //начало очереди
//
//    ProviderContainer(void); //конструктор без параметров
//    ~ProviderContainer(void); //деструктор
//
//    void push_back(Provider* obj); //добавить элемент в конец очереди
//    Provider* pop_back(void); //удалить последний элемент
//    bool pop(string name); //удаление элемента с заданным значением
//    void clear(void); //очистка очереди
//    Provider* find(string name); //поиск по заданому параметру
//};
//
//class ProviderContainerIterator
//{
//    const ProviderContainer* obj; //
//    ProviderElem* iter; //объект структуры
//
//public:
//    ProviderContainerIterator(const ProviderContainer* obj);
//
//    ProviderElem* begin(void);
//
//    Provider* getIter(void); //текущая информация
//
//    bool isEnd(void); //проверка на конец очереди
//
//    void next(void); //функция для перехода к следующему єлементу
//};
Provider* getProviderObject(string typeOfFlowers, string name, string country); //для выбора нужного класса по названию и создания
//---------------------------------------------------------------------------------------------

class Cut : public Provider //класс-наследник Обрезанные цветы
{
public: //методы
    //конструктор с параметрами
    Cut(string name, string country);
};

//---------------------------------------------------------------------------------------------

class WithRoot : public Provider //класс-наследник Цветы с корнем
{
public: //методы
    //конструктор с параметрами
    WithRoot(string name, string country);
};

//---------------------------------------------------------------------------------------------

