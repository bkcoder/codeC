#pragma once
#include"string.h"
#include "Ngaysinh.h"
#include "HoTen.h"

class Hocsinh
{
private:
	char cMahocsinh[20];
	HoTen m_oHoten;
	Ngaysinh m_oNgaysinh;
	char cDiachi[20];
public:
	Hocsinh(const char code[20], const HoTen hoten, const Ngaysinh ngaysinh, const char add[20]);
	void Hienthi();
};

