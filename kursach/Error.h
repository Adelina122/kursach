#pragma once

class Error //������� ����� ����������
{
protected: //����
	const char* information;
public: //������
	Error(const char* information); //����������� �����������
	//���������� ����� ������
	virtual const char* getMessage(void) const;
};

class FileError : public Error //����������� �����
{
public://������
	//����������� �����������
	FileError(const char* information);
};

class FlowersError : public Error //����������� �����
{
public: //������
	//����������� �����������
	FlowersError(const char* information);
};

class SellerError : public Error //����������� �����
{
public://������
	//����������� �����������
	SellerError(const char* information);
};

class ProviderError : public Error //����������� �����
{
public://������
	//����������� �����������
	ProviderError(const char* information);
};

