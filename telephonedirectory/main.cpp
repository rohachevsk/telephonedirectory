#include <iostream>
#include "Abonent.h"
using namespace std;

int searchAbonentByName(Abonent directory[], int size, const char* nameToSearch)
{
	for (int i = 0; i < size; ++i)
	{
		if(directory[i].getFio() == nameToSearch)
		{
			return i;
		}
	}
}

int main()
{
	const int SIZE = 3;
	int choice = 50;
	Abonent directory[SIZE];
	for(int i =0; i < SIZE; i++)
	{
		char* name = new char[choice];	
		char* info = new char[choice];	
		int work;
		int home;
		cout << "Enter FIO: ";
		cin.getline(name, choice);
		cout << "Enter Work Phone: ";
		cin >> work;
		cout << "Enter Home Phone: ";
		cin >> home;
		cin.ignore();
		cout << "Enter Info: ";
		cin.getline(info, choice);
		directory[i].init(name, work, home, info);

		delete[] name;
		delete[]info;
	}
	for(int i =0; i < SIZE; i++)
	{
		cout << "Abonent " << i + 1 << endl;
		directory[i].print();
		cout << endl;
	}
	

}