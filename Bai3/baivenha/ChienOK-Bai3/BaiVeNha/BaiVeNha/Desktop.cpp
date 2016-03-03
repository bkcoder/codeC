#include "Desktop.h"
#include<iostream>

Desktop::Desktop(const int x, const int y, const int width, const int height, const Button button)
{
	iX = x;
	iY = y;
	iWidth = width;
	iHeight = height;
	this->button = button;
}
void Desktop::Display()
{
	std::cout<<"\nCac Thuoc tinh cua desktop: "<< "\n\tiX= " << iX << " iY= " << iY << " Width= " << iWidth << " Height= " << iHeight;
	std::cout << "\n\tButton:";
	button.Display();
}
Desktop::Desktop()
{
}


Desktop::~Desktop()
{
}
