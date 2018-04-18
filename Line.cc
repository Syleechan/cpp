/* -->Work Hard!<-- */
 /// @File->    Line.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 07:41:59
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

	Point(int ix, int iy)
	: _ix(ix)
	, _iy(iy)
	{
		cout << "Point(int, int)" << endl;
	}

	void print()
	{
		cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}
private:
	int _ix;
	int _iy;
};

class Line
{
public:
	Line(int x1, int y1, int x2, int y2)//若不初始化默认会调用对象的默认构造函数
	: _pt1(x1, y1)
	, _pt2(x2, y2)
	{
		cout << "Line(int, int, int, int)" << endl;
	}

	void display()
	{
		_pt1.print();
		cout << "--->";
		_pt2.print();
		cout << endl;

	}

private:
	Point _pt1;
	Point _pt2;
};

int main()
{
	Point pt(1, 2);
	pt.print();
	Line line(1, 2, 3, 4);
	line.display();

	return 0;
}

