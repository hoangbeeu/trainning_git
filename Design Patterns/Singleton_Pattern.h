#pragma once
#include<iostream>
using namespace std;
class Singleton
{
private:
	static Singleton* instance;
	Singleton();
public:
	static Singleton* getInstance();
};

