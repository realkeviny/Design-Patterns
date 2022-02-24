#include "Strategy.h"

#include <iostream>
using namespace std;

//具体算法A
class ConcreteStrategy1 : public Strategy
{
public:
	//算法A的实现
	virtual void algorithmInterface()
	{
		cout << "算法A实现" << endl;
	}
};

//具体算法B
class ConcreteStrategy2 :public Strategy
{
public:
	//算法B的实现
	virtual void algorithmInterface()
	{
		cout << "算法B实现" << endl;
	}
};


//具体算法C
class ConcreteStrategy3 :public Strategy
{
public:
	//算法C的实现
	virtual void algorithmInterface()
	{
		cout << "算法C实现" << endl;
	}
};