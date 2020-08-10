// Chỉ sinh ra một Object duy nhất 
// Tiết kiệm tài nguyên
#include "Singleton_Pattern.h"
Singleton* Singleton::instance = NULL;
Singleton* Singleton::getInstance()
{
	if (instance == NULL)
	{
		instance = new Singleton();
		
	}
	return instance;// Lưu ý để return ở ngoài
}

Singleton::Singleton() {}

