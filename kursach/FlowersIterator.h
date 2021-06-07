#pragma once
#include "Flowers.h"
using namespace std;

struct FlowersElement //для хранения указателей
{
    Flowers* info; //данные
    FlowersElement* previous; //предыдущий элемент
    FlowersElement* next; //следующий элемент
};

class FlowersContainer
{
public: //поля
    FlowersElement* last; //конец очереди
    FlowersElement* first; //начало очереди
public: //методы
    FlowersContainer(); //конструктор без параметров
    ~FlowersContainer(); //деструктор
    Flowers* findElement(string name); //поиск по заданому параметру
    Flowers* popBack(void); //удалить последний элемент
    bool popElement(string name); //удаление элемента с заданным значением
    void clearContainer(void); //очистка очереди
    void pushBack(Flowers* obj); //добавить элемент в конец очереди
    friend class FlowersIterator;
};

class FlowersIterator //класс-итератор
{ //поля
    const FlowersContainer* object; //объект класса-контейнера FlowersContainer
    FlowersElement* iterator; //объект структуры FlowersElement
public: //методы
    FlowersIterator(FlowersContainer* obj); //конструктор копирования
    bool isEndContainer(void); //проверка на конец очереди
    void nextElement(void); //функция для перехода к следующему єлементу
    FlowersElement* getBeginContainer(void); //возвращает начало очереди
    Flowers* getIterator(void); //возвращает текущую информацию
};

//---------------------------------------------------------------------------------------------


