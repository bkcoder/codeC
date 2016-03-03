#include "NgaySinh.h"
#include"string.h"
#include<iostream>
using namespace std;
void NgaySinh::setNgay(int ngay)
{
	this->iNgay = ngay;
}
int NgaySinh::getNgay()
{
	return iNgay;
}
NgaySinh::NgaySinh(int ngay, int thang, int nam)
{
	iNgay = ngay;
	iThang = thang;
	iNam = nam;
}
NgaySinh::NgaySinh()
{
	iNgay = 23;
	iThang = 10;
	iNam = 1993;
}
void NgaySinh::hienthi(char *str)
{ 
	if (strcmp(str, "dd/mm/yyyy")==0)
		cout << iNgay << "/" << iThang << "/" << iNam;
	else
		if (strcmp(str, "mm/dd/yyyy")==0)
			cout << iThang << "/" << iNgay << "/" << iNam;
	else cout << "Nhap sai dinh dang";
		
}

NgaySinh::~NgaySinh()
{
}
