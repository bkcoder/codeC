#include "Ngaysinh.h"
#include <iostream>
#include <string.h>

using  std::cout;
using  std::endl;

Ngaysinh::Ngaysinh() {
	iNgay = 1;
	iThang = 1;
	iNam = 1990;
}

Ngaysinh::~Ngaysinh() {
	cout << "Da huy toi duong" << endl;
}

Ngaysinh::Ngaysinh(const int ngay, const int thang, const int nam) {
	iNgay = ngay;
	iThang = thang;
	iNam = nam;
}
void Ngaysinh::setNgay(int ngay) {
	iNgay = ngay;
}

void Ngaysinh::setThang(int thang) {
	iThang = thang;
}

void Ngaysinh::setNam(int nam) {
	iNam = nam;
}

int Ngaysinh::getNgay() {
	return iNgay;
}

int Ngaysinh::getThang() {
	return iThang;
}

int Ngaysinh::getNam() {
	return iNam;
}

void Ngaysinh::Hienthi(const int format) {
	if (format == FORMAT1) {
		cout << iNgay << "/" << iThang << "/" << iNam << endl;
	}
	else if (format == FORMAT2) {
		cout << iThang << "/" << iNgay << "/" << iNam << endl;
	}
	
	
}