/* -->Work Hard!<-- */
 /// @File->    stack.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 01:44:48
/* -->Work Hard!<-- */
#include<string.h>
#include<string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Sy_stack
{
public:
	void init();
	void push(int data);
	void pop();
	int top();
	bool empty();
	bool full();
	void print();

private:
	int _top;
	int *_data;
};

void Sy_stack::init()
{
	_top = -1;
	_data = new int[10]();
}

bool Sy_stack::empty()
{
	if(_top == -1)
		return true;
	else
		return false;
}

bool Sy_stack::full()
{
	if(_top == 9)
		return true;
	else
		return false;
}

void Sy_stack::push(int data)
{
	_top++;
	if(_top != 9)
	{
		_data[_top] = data;
	}
	else
	{
		cout << "Stack corrupted!" << endl;
		return;
	}
}

void Sy_stack::pop()
{
	_top --;
}

int Sy_stack::top()
{
	int data;
	data = _data[_top];
	return data;

}

void Sy_stack::print()
{
	cout << "The data of top  is " << _data[_top] << endl;
}


int main()
{
	Sy_stack st;
	st.init();
	st.push(10);
	st.print();
	st.push(12);
	st.print();
	st.push(14);
	st.print();
	int a,b;
	a = st.top();
	cout << "a = " << a << endl;
	st.pop();
	b = st.top();
	cout << "b = " << b << endl;
	return 0;
}


