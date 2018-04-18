/* -->Work Hard!<-- */
 /// @File->    Singleton.cc
 /// @Author->  Sy_leechan(lcxtzx2010@163.com)
 /// @Date->    2018-04-12 05:12:33
/* -->Work Hard!<-- */
 
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
public:
	static Singleton* getInstance()
	{
		if(_pInstance == NULL)
		{
			_pInstance = new Singleton;
		}
		return _pInstance;
	}

	static void destroy()
	{
		if(_pInstance)
		{
			delete _pInstance;
		}
	}

private:
	static Singleton* _pInstance;

	Singleton()
	{
		cout << "Singleton()" << endl;
	}

	~Singleton()
	{
		cout << "~Singleton()" << endl;
	}

};

Singleton* Singleton::_pInstance = NULL;

int main()
{
	Singleton* p1 = Singleton::getInstance();
	Singleton* p2 = Singleton::getInstance();
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;

	Singleton::destroy();

	return 0;
}



