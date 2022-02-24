#include "Context.h"
#include "ConcreteStrategy.cpp"


Context::Context(Strategies sType)
{
	switch (sType)
	{
	case SA:
		_strategy = new ConcreteStrategy1();
		break;
	case SB:
		_strategy = new ConcreteStrategy2();
		break;
	case SC:
		_strategy = new ConcreteStrategy3();
		break;
	}
}


Context::~Context()
{
	delete _strategy;
	_strategy = nullptr;
}

void Context::ContextInterface()
{
	_strategy->algorithmInterface();
}