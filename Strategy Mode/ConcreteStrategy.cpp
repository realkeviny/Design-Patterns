#include "Strategy.h"

#include <iostream>
using namespace std;

//�����㷨A
class ConcreteStrategy1 : public Strategy
{
public:
	//�㷨A��ʵ��
	virtual void algorithmInterface()
	{
		cout << "�㷨Aʵ��" << endl;
	}
};

//�����㷨B
class ConcreteStrategy2 :public Strategy
{
public:
	//�㷨B��ʵ��
	virtual void algorithmInterface()
	{
		cout << "�㷨Bʵ��" << endl;
	}
};


//�����㷨C
class ConcreteStrategy3 :public Strategy
{
public:
	//�㷨C��ʵ��
	virtual void algorithmInterface()
	{
		cout << "�㷨Cʵ��" << endl;
	}
};