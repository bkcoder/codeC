#pragma once
class HoTen
{
private:
	char m_strHo[20];
	char m_strTenDem[20];
	char m_strTen[20];
public:
	HoTen();
	HoTen(const char ho[20], const char tenDem[20], const char ten[20]);
	~HoTen();
	void Hienthi();
};

