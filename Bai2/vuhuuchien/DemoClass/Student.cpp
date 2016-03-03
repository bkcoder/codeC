#include "Student.h"
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int Student::getMsv()
{
	return msv;
}

void Student::setMsv(int msv)
{
	this->msv = msv;
}

char* Student::getHoten()
{
	return hoten;
}

void Student::setHoten(char *hoten1)
{
	int length = strlen(hoten1);
	if (hoten == NULL)
	{
		hoten = new char[length + 1];
		strcpy_s(hoten, length + 1, hoten1);
	}
	else
	{
		delete hoten;
		hoten = new char[length + 1];
		strcpy_s(hoten, length + 1, hoten1);
	}
}

char* Student::getNgaysinh()
{
	return ngaysinh;
}

void Student::setNgaysinh(char *ngaysinh1)
{
	int length = strlen(ngaysinh1);
	if (ngaysinh == NULL)
	{
		ngaysinh = new char[length + 1];
		strcpy_s(ngaysinh, length + 1, ngaysinh1);
	}
	else
	{
		delete ngaysinh;
		ngaysinh = new char[length + 1];
		strcpy_s(ngaysinh, length + 1, ngaysinh1);
	}
}

char* Student::getQuequan()
{
	return quequan;
}

void Student::setQuequan(char *quequan1)
{
	int length = strlen(quequan1);
	if (quequan == NULL)
	{
		quequan = new char[length + 1];
		strcpy_s(quequan, length + 1, quequan1);
	}
	else
	{
		delete quequan;
		quequan = new char[length + 1];
		strcpy_s(quequan, length + 1, quequan1);
	}
}
//Hàm tạo không đối
Student::Student()
{
	msv = 0;
	hoten = NULL;
	ngaysinh = NULL;
	quequan = NULL;
}
//Hàm tạo có đối
Student::Student(int msv1,char *hoten1,char *ngaysinh1,char *quequan1)
{
	msv = msv1;
	int a = strlen(hoten1);
	hoten = new char[a + 1];
	strcpy_s(hoten, a + 1, hoten1);
	int b = strlen(ngaysinh1);
	ngaysinh = new char[b + 1];
	strcpy_s(ngaysinh, b + 1, ngaysinh1);
	int c = strlen(quequan1);
	quequan = new char[c + 1];
	strcpy_s(quequan, c + 1, quequan1);
}

Student::~Student()
{
	msv = 0;
	if (hoten != NULL) delete hoten;
	if (ngaysinh != NULL) delete ngaysinh;
	if (quequan != NULL) delete quequan;
}
void Student::hienthi()
{
	if(msv!=0)
		cout << "\n" << msv << "  " << hoten << "  " << ngaysinh << "  " << quequan;
}
