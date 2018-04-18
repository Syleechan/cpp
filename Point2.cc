/* -->Work Hard!<-- */
 /// @File->    Point2.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 06:00:57
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point(int ix, int iy)
	: _ix(ix)
	, _iy(iy)//常量成员必须要放在初始化列表之中
	{//不可放在函数内
	}

	void print()
	{
		cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

private:
	const int _ix;
	const int _iy;

};

int main()
{
	Point pt(1, 2);
	pt.print();

	return 0;

}



