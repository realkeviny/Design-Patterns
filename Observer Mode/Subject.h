#ifndef _SUBJECT_H
#define _SUBJECT_H

#include "Observer.h"

class Subject
{
public:
	virtual ~Subject() = default;
	virtual void Attach(Observer* observer) = 0;
	virtual void Detach(Observer* observer) = 0;
	virtual void Notify() = 0;
};
#endif