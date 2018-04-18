/* -->Work Hard!<-- */
 /// @File->    Point5.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 06:47:07
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
	
	explicit //禁止隐式转换，implicit
	Point(int ix, int iy = 0)
	: _ix(ix)
	, _iy(iy)
	{
		cout << "Point(int, int = 0)" << endl;
		cout << "_ix = " << _ix <<" _iy = " << _iy << endl;
	}

	Point(const Point &rhs);
#if 1
	void print()
	{
		cout << "void Point::print()" << endl;
		cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

#endif

#if 1

	void print()
	const{
		cout << " void Point::print() const " << endl;
		cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

#endif

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
	int arr[5];
	Point points[5] = {Point(1, 2), Point(3, 4)};

	//Point pt = 1;//Point pt = point(1,0) = 1,隐式转换 -->构造函数
	Point pt(5,6);
	pt.print();

	return 0;

}
