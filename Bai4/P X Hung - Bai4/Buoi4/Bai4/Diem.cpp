#include "Diem.h"
#include<iostream>

using std::cout;
using std::endl;

Diem::Diem(const int x, const int y)
{
	iX = x;
	iY = y;
}

Diem::Diem()
{

}
Diem::~Diem()
{

}

void Diem::hienthi()
{
	cout << "x = " << iX << endl;
	cout << "y = " << iY << endl;
}
