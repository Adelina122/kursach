#pragma once

class Error //базовый класс исключений
{
protected: //поля
	const char* information;
public: //методы
	Error(const char* information); //конструктор копирования
	//возвращает текст ошибки
	virtual const char* getMessage(void) const;
};

class FileError : public Error //производный класс
{
public://методы
	//конструктор копирования
	FileError(const char* information);
};

class FlowersError : public Error //производный класс
{
public: //методы
	//конструктор копирования
	FlowersError(const char* information);
};

class SellerError : public Error //производный класс
{
public://методы
	//конструктор копирования
	SellerError(const char* information);
};

class ProviderError : public Error //производный класс
{
public://методы
	//конструктор копирования
	ProviderError(const char* information);
};

