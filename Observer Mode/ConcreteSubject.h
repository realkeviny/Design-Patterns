#ifndef _CONCRETESUBJECT_H
#define _CONCRETESUBJECT_H

#include <list>
#include <string>
#include "Subject.h"
using namespace std;

class ConcreteSubject :public Subject
{
public:
	void Attach(Observer* observer) override
	{
		observers.push_back(observer);
	}
	void Detach(Observer* observer) override
	{
		while (!observers.empty())
		{
			for (auto it = observers.begin(); it != observers.end(); ++it)
			{
				if (*it == observer)
				{
					observers.erase(it);
					break;
				}
			}
			break;
		}
	}
	void Notify() override
	{
		while (!observers.empty())
		{
			for (auto item : observers)
			{
				item->Update();
			}
			break;
		}
	}
	string GetSubjectState()//����״̬
	{
		return SubjectState;
	}
	void SetSubjectState(string state)//��ȡ״̬
	{
		SubjectState = state;
	}
private:
	string SubjectState;
	list<Observer*> observers;
};
#endif