#include "Students.h"
#include <iostream>
#include <string.h>

using namespace std;

Students::Students()
{
	Iday = 15;
	Imonth = 2;
	Iyear = 1997;
	
}

Students::~Students()
{
}

void Students::setday(int day) {
	Iday = day;
}
void Students::setmonth(int month) {
	Imonth = month;
}
void Students::setyear(int year) {
	Iyear = year;
}
int Students::getday() {
	return Iday;
}
int Students::getmonth() {
	return Imonth;
}
int Students::getyear() {
	return Iyear;
}
void Students::hienthi1() {
	cout << "Ho ten: " << Cfullname;
	cout << "Ma sinh vien: " << Istudentcode;
	cout << "Que Quan: " << Chometown;
}
void Students::hienthi2(char const* Format) {
	if (strcmp(Format, "dd/mm/yyyy")) {
		cout << "Ngay sinh: ";
		cout << "/" << Iday << "/" << Imonth << "/" << Iyear << endl;
	}
}
