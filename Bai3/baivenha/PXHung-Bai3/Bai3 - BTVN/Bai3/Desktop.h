#pragma once
#include"Button.h"

class Desktop
{

private:
	int iX_D;
	int iY_D;
	int iWitdh_D;
	int iHigh_D;
	Button m_oButton;

public:
	Desktop(const int x, const int y, const int witdh, const int high, const Button button);
	Desktop();
	~Desktop();

	void hienthi();
};

