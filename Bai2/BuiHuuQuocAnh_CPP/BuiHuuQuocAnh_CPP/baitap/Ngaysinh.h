#pragma once
class Ngaysinh
{
public:
	enum FORMAT_NGAYSINH
	{
		FORMAT1 = 0, //"dd/mm/yyyy"
		FORMAT2 = 1 //"mm/dd/yyyy"
	};
private:
	unsigned int iNgay;
	unsigned int iThang;
	unsigned int iNam;
public:
	Ngaysinh();
	~Ngaysinh();
	Ngaysinh(const int ngay, const int thang, const int nam);
	void setNgay(int ngay);
	void setThang(int thang);
	void setNam(int nam);
	int getNgay();
	int getThang();
	int getNam();
	void Hienthi(const int format);
};

