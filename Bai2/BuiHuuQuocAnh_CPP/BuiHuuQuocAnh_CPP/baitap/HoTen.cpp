#include "HoTen.h"
#include <string.h>
#include <iostream>

using  std::cout;
using  std::endl;

HoTen::HoTen(const char ho[20], const char tenDem[20], const char ten[20])
{
	strcpy_s(m_strHo, ho);
	strcpy_s(m_strTenDem, tenDem);
	strcpy_s(m_strTen, ten);
}

HoTen::HoTen() {

}

HoTen::~HoTen()
{
}

void HoTen::Hienthi() {
	cout << m_strHo << " " << m_strTen << " " << m_strTen << endl;
}