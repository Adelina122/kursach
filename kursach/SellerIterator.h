#pragma once
#include "Seller.h"

using namespace std;

struct SellerElement //для хранения указателей
{
    Seller* info; //данные
    SellerElement* previous; //предыдущий элемент
    SellerElement* next; //следующий элемент
};

class SellerContainer //класс-контейнер для обработки объектов иерархии классов
{
public: //поля
    SellerElement* last; //конец очереди
    SellerElement* first; //начало очереди
public: //методы
    SellerContainer(void); //конструктор без параметров
    ~SellerContainer(void); //деструктор
    void getLast();
    bool popElement(string name); //удаление элемента с заданным значением
    void pushBack(Seller* obj); //добавить элемент в конец очереди
    void clearContainer(void); //очистка очереди
    Seller* findElement(string name); //поиск по заданому параметру
    Seller* popBack(void); //удалить последний элемент
};

class SellerIterator //класс-итератор для обхода элементов контейнера
{ //поля
    const SellerContainer* object; //объект типа SellerContainer
    SellerElement* iterator; //объект структуры SellerElement
public: //методы
    SellerIterator(const SellerContainer* obj); //конструктор копирования
    bool isEndContainer(void); //проверка на конец очереди
    void nextElement(void); //функция для перехода к следующему єлементу
    SellerElement* getBeginContainer(void); //возвращает начало очереди
    Seller* getIterator(void); //возвращает текущую информацию
};

//---------------------------------------------------------------------------------------------
