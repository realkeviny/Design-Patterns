#include <iostream>
#include "Context.h"
#include <memory>
using namespace std;

int main(int argc, char* argv[])
{
	Context* strategyFactory = nullptr;

	strategyFactory = new Context(Strategies::SA);
	strategyFactory->ContextInterface();

	strategyFactory = new Context(Strategies::SB);
	strategyFactory->ContextInterface();

	strategyFactory = new Context(Strategies::SC);
	strategyFactory->ContextInterface();

	delete strategyFactory;
	strategyFactory = nullptr;
}

