#ifndef _CONTEXT_H
#define _CONTEXT_H

#include "Strategy.h"

enum Strategies
{
	SA,SB,SC
};

class Context
{
public:
	Context(Strategies sType);
	~Context();
	void ContextInterface();

private:
	Strategy* _strategy;
};

#endif