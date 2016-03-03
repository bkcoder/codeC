#include "Desktop.h"
#include "Button.h"
#include <iostream>

using std::cout;
using std::endl;

Desktop::Desktop() {

}

Desktop::Desktop(const int x, const int y, const int height, const int width, const Button button)
{
	iX = x;
	iY = y;
	iHeight = height;
	iWidth = width;
	m_obutton = button;
}


Desktop::~Desktop()
{

}

void Desktop::setiX(int x) {
	iX = x;
}

void Desktop::setiY(int y) {
	iY = y;
}

void Desktop::setiHeight(int height) {
	iHeight = height;
}

void Desktop::setiWidth(int width) {
	iWidth = width;
}

int Desktop::getiX() {
	return iX;
}

int Desktop::getiY() {
	return iY;
}

int Desktop::getiHeight() {
	return iHeight;
}

int Desktop::getiWidth() {
	return iWidth;
}

void Desktop::display() {
	cout << "X = " << iX << endl;
	cout << "Y = " << iY << endl;
	cout << "Height = " << iHeight << endl;
	cout << "Width = " << iWidth << endl;
	m_obutton.display();
}

Desktop::Desktop(Button button) {
	m_obutton = button;
}

void Desktop::setButton(Button button) {
	m_obutton = button;
}
Button Desktop::getButton() {
	return m_obutton;
}