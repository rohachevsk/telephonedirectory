#include "Abonent.h"
#include <iostream>
using namespace std;
Abonent::Abonent()
{
}

void Abonent::init(const char* f, const char* h, const char* w, const char* m, const char* i)
{
	fio = new char[strlen(f) + 1];
	strcpy_s(fio, strlen(f) + 1, f);
	strcpy_s(homePhone, 20, h);
	strcpy_s(workPhone, 20, w);
	strcpy_s(mobilePhone, 20, m);
	strcpy_s(info, 100, i);
}

Abonent::~Abonent()
{
	delete[] fio;
}

void Abonent::print()
{
	cout << "FIO: " << fio << endl;
	cout << "Home Phone: " << homePhone << endl;
	cout << "Work Phone: " << workPhone << endl;
	cout << "Mobile Phone: " << mobilePhone << endl;
	cout << "Info: " << info << endl;
}

void Abonent::setFio(const char* f)
{
	delete[] fio;
	fio = new char[strlen(f) + 1];
	strcpy_s(fio, strlen(f) + 1, f);
}

void Abonent::setHomePhone(const char* h)
{
	strcpy_s(homePhone, 20, ð);
}

void Abonent::setWorkPhone(const char* w)
{
	strcpy_s(workPhone, 20, w);
}

void Abonent::setMobilePhone(const char* m)
{
	strcpy_s(mobilePhone, 20, m);
}


void Abonent::setInfo(const char* i)
{
	strcpy_s(info, 100, i);
}

const char* Abonent::getFio()
{
	return fio;
}

const char* Abonent::getHomePhone()
{
	return homePhone;
}

const char* Abonent::getWorkPhone()
{
	return workPhone;
}

const char* Abonent::getMobilePhone()
{
	return mobilePhone;
}

const char* Abonent::getInfo()
{
	return info;
}
