#include "Abonent.h"
#include <iostream>
using namespace std;
Abonent::Abonent()
{
	fio = nullptr;
	workPhone = 0;
	homePhone = 0;
	info = nullptr;
}

void Abonent::init(const char* f, int w, int h, const char* i)
{
	fio = new char[strlen(f) + 1];
	strcpy_s(fio, strlen(f) + 1, f);
	workPhone = w;
	homePhone = h;
	info = new char[strlen(i) + 1];
	strcpy_s(info, strlen(i) + 1, i);
}
Abonent::~Abonent()
{
	delete[] fio;
	delete[] info;
}

void Abonent::print()
{
	cout << "FIO: " << fio << endl;
	cout << "Home Phone: " << homePhone << endl;
	cout << "Work Phone: " << workPhone << endl;
	cout << "Info: " << info << endl;
}

void Abonent::setFio(const char* f)
{
	delete[] fio;
	fio = new char[strlen(f) + 1];
	strcpy_s(fio, strlen(f) + 1, f);
}
void Abonent::setWorkPhone(int w)
{
	workPhone = w;
}

void Abonent::setHomePhone(int h)
{
	homePhone = h;
}
void Abonent::setInfo(const char* i)
{
	delete[]i;
	info = new char[strlen(i) + 1];
	strcpy_s(info, strlen(i) + 1, i);
}

const char* Abonent::getFio()
{
	return fio;
}

int Abonent::getHomePhone()
{
	return homePhone;
}

int Abonent::getWorkPhone()
{
	return workPhone;
}

const char* Abonent::getInfo()
{
	return info;
}
