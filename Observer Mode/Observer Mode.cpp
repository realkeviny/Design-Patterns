#include "ConcreteObserver.h"

int main()
{
	ConcreteSubject* huhansan = new ConcreteSubject;

	ConcreteObserver* tongshi1 = new ConcreteObserver(huhansan, "κ���");
	ConcreteObserver* tongshi2 = new ConcreteObserver(huhansan, "�׹ܲ�");
	ConcreteObserver* tongshi3 = new ConcreteObserver(huhansan, "�ɲ���");
	huhansan->Attach(tongshi1);
	huhansan->Attach(tongshi2);
	huhansan->Attach(tongshi3);

	huhansan->Detach(tongshi1);
	huhansan->SetSubjectState("�Һ����������ˣ�");
	huhansan->Notify();

	delete huhansan;
	delete tongshi1;
	delete tongshi2;
	delete tongshi3;

	huhansan = nullptr;
	tongshi1 = tongshi2 = tongshi3 = nullptr;

	return 0;
}