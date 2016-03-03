#pragma once
class NgaySinh
{
private :
	unsigned int iNgay;
	unsigned int iThang;
	unsigned int iNam;
public:
	void setNgay(int ngay);
	int getNgay();
	int getThang();
	void setThang();
	int getNam();
	void setNam(int nam);
	NgaySinh();
	void hienthi(char *str);
	NgaySinh(int ngay,int thang,int nam);
	~NgaySinh();
};

