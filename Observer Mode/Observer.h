#ifndef _OBSERVER_H
#define _OBSERVER_H

class Observer
{
public:
	virtual ~Observer() = default;
	virtual void Update() = 0;
};

#endif