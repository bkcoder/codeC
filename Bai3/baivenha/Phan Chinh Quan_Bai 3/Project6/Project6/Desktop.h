#pragma once
#include "Button.h"
class Desktop
{
public:
	Desktop();
	Desktop(const int x, const int y, const int height, const int width, const Button button);
	~Desktop();
	Desktop(Button button);
	void setButton(Button button);
	Button getButton();
	void setiX(int x);
	void setiY(int y);
	void setiHeight(int height);
	void setiWidth(int width);
	int getiX();
	int getiY();
	int getiHeight();
	int getiWidth();
	void display();
private:
	int iX;
	int iY;
	int iHeight;
	int iWidth;
	Button m_obutton;

};

