#pragma once
class Button
{

private:

	int iX;
	int iY;
	int iWidth;
	int iHigh;

public:
	Button(const int x, const int y, const int width, const int high);

	Button();

	~Button();

	void setX(const int x);
	void setY(const int y);
	void setWidth(const int witdh);
	void setHigh(const int high);

	int getX();
	int getY();
	int getWitdh();
	int getHigh();

	void Display();

};
