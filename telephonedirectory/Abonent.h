#pragma once
class Abonent
{
    char* fio;
    char homePhone[20];
    char workPhone[20];
    char mobilePhone[20];
    char info[100];
public:
	Abonent();
	void init(const char* f, const char* h, const char* w, const char* m, const char* i);
	~Abonent();
	void print() ;
	void setFio(const char* f);
	void setHomePhone(const char* h);
	void setWorkPhone(const char* w);
	void setMobilePhone(const char* m);
	void setInfo(const char* i);
	const char* getFio();
	const char* getHomePhone() ;
	const char* getWorkPhone() ;
	const char* getMobilePhone() ;
	const char* getInfo() ;
};

