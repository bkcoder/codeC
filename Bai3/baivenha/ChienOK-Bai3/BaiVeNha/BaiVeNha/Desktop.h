#pragma once
#include"Button.h"
class Desktop
{
private:
	int iX;
	int iY;
	int iWidth;
	int iHeight;
	Button button;
public:
	Desktop(const int x, const int y, const int width, const int height, const Button button);
	void Display();
	Desktop();
	~Desktop();
};

