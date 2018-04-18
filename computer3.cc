/* -->Work Hard!<-- */
 /// @File->    computer2.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-11 04:59:01
/* -->Work Hard!<-- */
#include <string.h> 
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

#if 0
struct Person
{
	void setName(const string &name)
	{
		_name = name;
	}

	void setGender(bool gender)
	{
		_gender = gender;
	}

	void print()
	{
		cout << "姓名：" << _name << endl
			 << "性别：" << _gender << endl;
	}

	string _name;
bool _gender;
};
#endif

class Computer
{
public:
	Computer(const char* brand, float price)
	: _brand(new char[strlen(brand) + 1]())
	, _price(price)
	{
		strcpy(_brand, brand);
		cout << "Computer(const char*, float)" << endl;
		_totalPrice += _price;
	}

	Computer(const Computer &rhs)
	: _brand(new char[strlen(rhs._brand + 1)]())
	, _price(rhs._price)
	{
		cout << "Computer(const Computer&)" << endl;
		strcpy(_brand, rhs._brand);
	}
	
	Computer &operator = (const Computer &rhs)
	{
		cout << "Computer &operator = (const Computer&)" << endl;
		if(this != &rhs)
		{
			delete[] _brand;
			_brand = new char[strlen(rhs._brand + 1)]();
			strcpy(_brand, rhs._brand);
			_price = rhs._price;
		}//深拷贝

		return *this;
	}

	void setBrand(const char* brand);
	void setPrice(float price);

	void print()
	{
		cout << "品牌：" << _brand << endl
			 << "价格：" << _price << endl;
	}
	static void printTotalPrice()
	{
		cout << "总价：" << _totalPrice << endl;
	//	cout << "品牌：" << this->_brand << endl;
	}//静态成员函数里没有this->指针，不能直接调用数据成员和成员函数

	~Computer()
	{
		delete[] _brand;
		cout << "~Computer()" << endl;
	}

private:
	char* _brand;
	float _price;
	static float _totalPrice;//存放在全局静态区
};

float Computer::_totalPrice = 0;//静态数据成员是整个类的所有对象共享的


void Computer::setBrand(const char* brand)
{
	::strcpy(_brand,brand);
}

void Computer::setPrice(float price)
{
	_price = price;
}


int main()
{
	Computer com1("MSI", 6666);
	cout << "com1: ";
	com1.print();
	Computer::printTotalPrice();
	cout << endl;

	Computer com2("Mac", 9999);
	com2.print();
	Computer::printTotalPrice();
	cout << endl;

	//Computer com3 = com1;
	//com3.print();

	//com3 = com2;
	//com3.print();

	cout << "sizeof(Computer) = " << sizeof(Computer) << endl;


	return 0;
}
