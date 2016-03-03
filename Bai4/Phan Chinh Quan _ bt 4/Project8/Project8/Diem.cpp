#include "Diem.h"
#include <iostream>

using std::cout;
using std::endl;

Diem::Diem()
{
}


Diem::~Diem()
{
}

Diem::Diem(int x, int y) {
	iX = x;
	iY = y;
}
void Diem::display() {
	cout << "(" << iX << "," << iY << ")" << endl;
}

int Diem::getX() {
	return iX;
}

int Diem::getY() {
	return iY;
}