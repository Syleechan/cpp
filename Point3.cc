/* -->Work Hard!<-- */
 /// @File->    Point3.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 06:06:12
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point(int ix, int iy, double &refx)
	: _ix(ix)
	, _iy(iy)
	, _refx(refx)
	{
	}

	void print()
	{
		cout << "(" << _ix
			 << "," << _iy
			 << "," << _refx
			 << ")" << endl;
	}


private:

	int _ix;
	int _iy;
	double &_refx;
};

int main()
{
	cout << "sizeof(Point) = " << sizeof(Point) << endl;
	double z = 5.5;
	Point pt(1, 2, z);
	pt.print();

	z = 6.6;
	pt.print();

	return 0;

}




