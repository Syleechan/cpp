/* -->Work Hard!<-- */
 /// @File->    operator.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 19:50:35
/* -->Work Hard!<-- */
#include<stdio.h>
#include<string>
#include<string.h>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Computer
{
private:
	char* _brand;
	float _price;

public:

	Computer()
	{
		_brand = NULL;
		_price = 0;
		cout << "Computer()" << endl;
	}//默认初始化

	Computer(const char* brand,float price)
	: _brand(new char[strlen(brand) + 1]())
	, _price(0)
	{
		strcpy(_brand,brand);
		_price = price;
		cout << "Computer(const char* brand,float price)" << endl;
	}//构造函数

	Computer(const Computer &rhs)
	: _brand(new char[strlen(rhs._brand) + 1]())
	, _price(0)
	{
		strcpy(_brand, rhs._brand);
		_price = rhs._price;
		cout << "Computer(const Computer &rhs)" << endl;
	}//复制函数

	Computer &operator = (const Computer &rhs)
	{
		_price = rhs._price;
		_brand = rhs._brand;
		cout << "Computer &operator = (const Computer &rhs)" << endl;
		return *this;
	}//系统默认的赋值操作运算符重载

#if 0
	Computer &operator = (const Computer &rhs)
	{
		if(this == rhs)
			return *this;

		_price = rhs.price;
		delete[] _brand;
		_brand = new char[strlen(rhs.brand) + 1]();

		if(_brand != NULL)
		{
			strcpy(_brand, rhs.brand);
		}
		cout << "Computer &operator = (const Computer &rhs)" << endl;

		return *this;
	}//构造的赋值操作运算符重载
#endif

	~Computer()
	{
		delete[] _brand;
		cout << "~Computer()" << endl;
	}

	void print()
	{
		cout << "品牌：" << _brand << endl;
		cout << "价格：" << _price << endl;
	}
};

int main()
{
	Computer com1("MSI", 6000);
	Computer com2 = com1;

	if(true)
	{
		Computer com3;
		com3 = com1;
	}

	return 0;
}




