/* -->Work Hard!<-- */
 /// @File->    Point4.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 06:12:42
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point(int ix, int iy)
	: _ix(ix)
	, _iy(iy)
	{
		cout << "Point(int, int)" << endl;
	}

	Point(const Point &rhs);
#if 1
	void print()//Point* const this，指针常量不可以修改对象地址，可更改值
	{
		cout << "void Point::print()" << endl;
		this->_ix = 100;
		cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

#endif

#if 1
	void print()
	const{//const Point* const this,皆不可修改
		cout << "void Point::print() const" << endl;
		cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

#endif

private:
	int _ix;
	int _iy;
};


int main()
{
	Point pt(1, 2);//非const对象可以调用非const成员函数，也可以调用const成员
	pt.print();

	const int a = 10;

	const Point pt2(3, 4);//const对象只能调用const成员
	pt2.print();

	return 0;

}
