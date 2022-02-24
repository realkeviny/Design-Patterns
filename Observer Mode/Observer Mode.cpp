#include "ConcreteObserver.h"

int main()
{
	ConcreteSubject* huhansan = new ConcreteSubject;

	ConcreteObserver* tongshi1 = new ConcreteObserver(huhansan, "魏关姹");
	ConcreteObserver* tongshi2 = new ConcreteObserver(huhansan, "易管查");
	ConcreteObserver* tongshi3 = new ConcreteObserver(huhansan, "成步堂");
	huhansan->Attach(tongshi1);
	huhansan->Attach(tongshi2);
	huhansan->Attach(tongshi3);

	huhansan->Detach(tongshi1);
	huhansan->SetSubjectState("我胡汉三回来了！");
	huhansan->Notify();

	delete huhansan;
	delete tongshi1;
	delete tongshi2;
	delete tongshi3;

	huhansan = nullptr;
	tongshi1 = tongshi2 = tongshi3 = nullptr;

	return 0;
}