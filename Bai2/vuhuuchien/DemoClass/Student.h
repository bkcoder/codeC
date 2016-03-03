#pragma once
class Student
{
private:
	int msv;
	char *hoten;
	char *ngaysinh;
	char *quequan;
public:
	int getMsv();
	void setMsv(int msv);
	char* getHoten();
	void setHoten(char *hoten);
	char* getNgaysinh();
	void setNgaysinh(char *ngaysinh);
	char* getQuequan();
	void setQuequan(char *quequan);
	void hienthi();
	Student();
	Student(int msv1, char *hoten1, char *ngaysinh1, char *quequan);
	~Student();
};

