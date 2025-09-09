#pragma once
class Abonent
{
    char* fio;
	int workPhone;
	int homePhone;
    char* info;
public:
	Abonent();
	void init(const char* f, int w, int h, const char* i);
	~Abonent();
	void print() ;
	void setFio(const char* f);
	void setHomePhone(int h);
	void setWorkPhone(int w);
	void setInfo(const char* i);
	const char* getFio();
	int getHomePhone() ;
	int getWorkPhone() ;
	const char* getInfo() ;
};

