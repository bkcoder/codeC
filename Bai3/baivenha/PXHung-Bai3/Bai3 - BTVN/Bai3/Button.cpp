#include "Button.h"
#include<iostream>

using std::cout;
using std::endl;


Button::Button(const int x, const int y, const int width, const int high)
{
	iX = x;
	iY = y;
	iWidth = width;
	iHigh = high;
}

Button::Button()
{

}

Button::~Button()
{

}

void Button::setX(const int x)
{
	iX = x;
}

void Button::setY(const int y)
{
	iY = y;
}

void Button::setWidth(const int witdh)
{
	iWidth = witdh;
}

void Button::setHigh(const int high)
{
	iHigh = high;
}

int Button::getX()
{
	return iX;
}

int Button::getY()
{
	return iY;
}

int Button::getWitdh()
{
	return iWidth;
}

int Button::getHigh()
{
	return iHigh;
}

void Button::Display()
{
	cout << " X = " << iX << endl;
	cout << " Y = " << iY << endl; 
	cout << " Width = " << iWidth << endl; 
	cout << " High = " << iHigh << endl;
}

