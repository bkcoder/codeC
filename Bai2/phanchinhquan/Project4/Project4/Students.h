#pragma once
class Students
{
public:
	unsigned int Istudentcode = 123456;
	char Cfullname[20] = "Phan Chinh Quan";
	char Chometown[10] = "Hung Yen";
private:
	unsigned int Iday;
	unsigned int Imonth;
	unsigned int Iyear;
public:
	Students();
	~Students();
	void setday(int day); 
	int getday();
	void setmonth(int month);
	int getmonth();
	void setyear(int year);
	int getyear();
	void hienthi1();
	void hienthi2(char const* Format);
};

