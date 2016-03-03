#include "Hocsinh.h"
#include <iostream>

using std::cout;
using std::endl;


Hocsinh::Hocsinh(const char code[20], const HoTen hoten, const Ngaysinh ngaysinh, const char add[20])
{
	strcpy_s(cMahocsinh, code);
	m_oHoten = hoten;
	m_oNgaysinh = ngaysinh;
	strcpy_s(cDiachi, add);
}



void Hocsinh::Hienthi() {
	
	cout << "Ma Hoc Sinh: " << cMahocsinh<< "\r\n";
	m_oHoten.Hienthi();
	m_oNgaysinh.Hienthi(Ngaysinh::FORMAT1);
	cout << "Dia Chi: " << cDiachi << "\r\n";
	
}