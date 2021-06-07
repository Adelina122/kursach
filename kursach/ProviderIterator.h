#pragma once
#include "Provider.h"
using namespace std;

//---------------------------------------------------------------------------------------------

struct ProviderElement //для хранения указателей
{
    Provider* info; //данные
    ProviderElement* previous; //предыдущий элемент
    ProviderElement* next; //следующий элемент
};

//---------------------------------------------------------------------------------------------

class ProviderContainer //класс-контейнер для обработки объектов иерархии классов
{
protected: //поля
   // friend ProviderElement;
    ProviderElement* last; //конец очереди
    ProviderElement* first; //начало очереди
public: //методы
    ProviderContainer(void); //конструктор без параметров
    ~ProviderContainer(void); //деструктор
    ProviderElement* getLast();
    ProviderElement* getFirst();
    void clearContainer(void); //очистка очереди
    void pushBack(Provider* obj); //добавить элемент в конец очереди
    bool popElement(string name); //удаление элемента с заданным значением
    Provider* findElement(string name); //поиск по заданому параметру
    Provider* popBack(void); //удалить последний элемент
};

//---------------------------------------------------------------------------------------------

class ProviderIterator //класс-итератор для обхода элементов класса-контейнера
{ //поля
protected:
    ProviderContainer* object; //объект типа ProviderContainer
    ProviderElement* iterator; //объект структуры ProviderElement
public: //методы
    ProviderContainer* getObject();
    ProviderElement* getIter();
    bool isEndContainer(void); //проверка на конец очереди
    void nextElement(void); //функция для перехода к следующему элементу
    ProviderIterator(ProviderContainer* obj); //конструктор копирования
    Provider* getIterator(void); //возвращает текущую информацию
    ProviderElement* getBeginContainer(void); //возвращает начало очереди
};
