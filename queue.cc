/* -->Work Hard!<-- */
 /// @File->    queue.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 02:40:41
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Sy_Queue
{
public:
	void init();
	void push(int data);
	void pop();
	int front();
	int back();
	bool empty();
	bool full();

private:
	int _front;
	int _tail;
	int* _data;

};

void Sy_Queue::init()
{
	_front = 0;
	_tail = 0;
	_data = new int[10]();
	cout << "Queue is init" << endl;

}

bool Sy_Queue::empty()
{
	if(_front == _tail)
		return true;
	else
		return false;
}

bool Sy_Queue::full()
{
	if(_tail == 9)
		return true;
	else
		return false;
}

void Sy_Queue::push(int data)
{
	if(_tail == 9)
	{
		cout << "the Queue is full" << endl;
		return ;
	}
	_data[_tail] = data;
	cout << "the tail is " << _data[_tail] << endl;
	cout << "the front is " << _data[_front] << endl;
	_tail++;
}

int Sy_Queue::front()
{
	return _data[_front];
}

int Sy_Queue::back()
{
	int i = _tail - 1;
	return _data[i];
}

void Sy_Queue::pop()
{
	_front ++;
	cout << "pop()" << endl;
}

int main()
{
	bool flag;
	Sy_Queue qu;
	qu.init();
	flag = qu.empty();
	cout << "empty() is " << flag << endl;
	qu.push(1);
	qu.push(2);
	qu.push(3);
	qu.pop();
	flag = qu.full();
	cout << "full() is " << flag << endl;
	int a;
	a = qu.front();
	cout << "get the front elem is " << a << endl;
	a = qu.back();
	cout << "get the tail elem is " << a << endl;

	return 0;
}










