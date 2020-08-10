#include <iostream>
#include"Singleton_Pattern.h"
#include"BaseCar.h"

void TestSingle()
{
	Singleton* s = Singleton::getInstance();
	Singleton* v = Singleton::getInstance();
	if (s == v)
	{
		cout << "Giong Nhau" << endl;
	}
	else
	{
		cout << "Khac Nhau" << endl;
	}
}
int main()
{
	BaseCar car;
	car.value = -2;
	BaseCar b = BaseCar(car);
	cout << b.value << endl;
	system("pause");
}