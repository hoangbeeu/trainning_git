#pragma once
/*Tăng hiệu suất khi làm việc với Object dữ liệu lớn=> Dùng để tối ưu*/
/*Nguyên lý: Thay vì tạo mới thì nó Coppy từ Object này sang Object khác*/
#include<iostream>
using namespace std;
class BaseCar
{
public:
	int value;
	BaseCar();
	BaseCar* Clone();
};

