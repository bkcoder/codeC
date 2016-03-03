#include "Diem3D.h"
#include <iostream>

using std::cout;
using std::endl;

Diem3D::Diem3D() : Diem2D(0, 0)
{
	iZ = 0;
}


Diem3D::~Diem3D()
{
}

Diem3D::Diem3D(Diem2D diem2d, int z) : Diem2D()
{
	m_oDiem2d = diem2d;
	iZ = z;
}

void Diem3D::display() {
	cout << "(" << m_oDiem2d.getX() << "," << m_oDiem2d.getY() << ", " << iZ <<")" << endl;

}