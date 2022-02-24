#ifndef _CONCRETEOBSERVER_H
#define _CONCRETEOBSERVER_H

#include "ConcreteSubject.h"
#include <iostream>

class ConcreteObserver :public Observer
{
public:
	ConcreteObserver() = default;
	ConcreteObserver(ConcreteSubject* subject, string name) :m_subject(subject), m_name(name) {}

	void Update() override
	{
		auto observerState = m_subject->GetSubjectState();
		std::cout << observerState << "," << m_name << "关闭NBA直播，继续工作!" << std::endl;
	}

private:
	ConcreteSubject* m_subject;
	string m_name;
};
#endif