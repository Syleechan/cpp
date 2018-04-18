/* -->Work Hard!<-- */
 /// @File->    Point.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 05:28:46
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point()
	: _ix(0)
	, _iy(0)
	{
		cout << "Point()" << endl;
	}

	Point(int ix, int iy = 0)
	: _ix(ix)
	, _iy(iy)
	{
		cout << "Point(int, int)" << endl;
	}

	Point(Point &rhs)
	: _ix(rhs._ix)
	, _iy(rhs._iy)
	{
		cout << "Point(const Point &)" << endl;
	}

#if 1
	Point &operator = (const Point &rhs)
	{
		cout << "Point &operator = (const Point &rhs)" << endl;
		this->_ix = rhs._ix;
		this->_iy = rhs._iy;
		return *this;
	}
#endif//若没有显示提供赋值运算符函数，编译器会自动提供一个

	void print()
	{
		cout << "(" << this->_ix
			 << "," << this->_iy
			 << ")" << endl;
	}

	~Point()
	{
		cout << "~Point()" << endl;
	}

private:
	int _ix;
	int _iy;
};


int main()
{
	int a = 3;
	int b = 4;
	a = b;//复制

	Point pt1(1, 2);
	cout << "pt1 = ";
	pt1.print();
	Point pt2(3, 4);
	cout << "pt2 = ";
	pt2.print();
	pt2 = pt1;
	cout << "pt2 = ";
	pt2.print();

	return 0;
}

