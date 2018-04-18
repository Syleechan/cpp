/* -->Work Hard!<-- */
 /// @File->    empty.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 05:22:50
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Empty
{
};//空类占一个字节 用来标识不同的类


int main(void)
{
	cout << "sizeof(Empty) = " << sizeof(Empty) << endl;
	//右值不能取地址
	//
	return 0;

}
