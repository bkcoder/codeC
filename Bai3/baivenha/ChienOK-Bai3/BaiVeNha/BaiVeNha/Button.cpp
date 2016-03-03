#include "Button.h"
#include<iostream>


Button::Button(const int x, const int y, const int width, const int height)
{
	iX = x;
	iY = y;
	this->width = width;
	this->height = height;
} 

Button::Button()
{
	iX = iY = width = height = 0;
}

void Button::Display()
{
	std::cout << "\n\tiX= " << iX << " iY= " << iY << " Width= " << width << " Height= " << height;
}

int Button::getX()
{
	return iX;
}

int Button::getY()
{
	return iY;
}

int Button::getWidth()
{
	return width;
}

int Button::getHeight()
{
	return height;
}

void Button::setX(int x)
{
	iX = x;
}

void Button::setY(int y)
{
	iY = y;
}

void Button::setWidth(int width)
{
	this->width = width;
}

void Button::setHeight(int height)
{
	this->height = height;
}
Button::~Button()
{
}
