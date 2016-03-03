#include "Button.h"
#include <iostream>

using std::cout;
using std::endl;

Button::Button() {

}
Button::Button(const int x, const int y, const int height, int width)
{
	iX = x;
	iY = y;
	iHeight = height;
	iWidth = width;
}

Button::~Button()
{
}

void Button::setiX(int x) {
	iX = x;
}

void Button::setiY(int y) {
	iY = y;
}

int Button::getiX() {
	return iX;
}

int Button::getiY() {
	return iY;
}

void Button::display() {
	cout << "X = " << iX << endl;
	cout << "Y = " << iY << endl;
	cout << "Height = " << iHeight << endl;
	cout << "Width = " << iWidth << endl;
}

