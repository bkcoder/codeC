#include "Hinh2D.h"
#include <iostream>

using std::cout;
using std::endl;

Hinh2D::Hinh2D()
{

}


Hinh2D::~Hinh2D()
{

}

Hinh2D::Hinh2D(Diem2D a1, Diem2D a2, Diem2D a3, Diem2D a4) {
	m_oA1 = a1;
	m_oA2 = a2;
	m_oA3 = a3;
	m_oA4 = a4;
}

void Hinh2D::hienthi() {
	m_oA1.display();
	m_oA2.display();
	m_oA3.display();
	m_oA4.display();
}