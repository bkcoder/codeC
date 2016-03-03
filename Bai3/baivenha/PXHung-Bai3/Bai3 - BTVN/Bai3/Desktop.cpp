#include "Desktop.h"
#include<iostream>

using std::cout;
using std::endl;


Desktop::Desktop(const int x, const int y, const int witdh, const int high, const Button button)
{
	iX_D = x;
	iY_D = y;
	iWitdh_D = witdh;
	iHigh_D = high;
	m_oButton = button;
}


Desktop::~Desktop()
{

}

void Desktop::hienthi()
{
	cout << " X_D = " << iX_D << endl;
	cout << " Y_D = " << iY_D << endl; 
	cout << " Width_D = " << iWitdh_D << endl; 
	cout << " High_D = " << iHigh_D << endl;
	m_oButton.Display();
}