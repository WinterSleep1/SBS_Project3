#include <iostream>

#include "../Program2/Terran.h"
#include "../Program2/Vulture.h"
#include "../Program2/Ghost.h"
#include "../Program2/Goliat.h"
#include "../Program2/Firebat.h"
#include "../Program2/SiegeTank.h"

using namespace std;

class AA
{
public:
	void Print() { cout << "class : AA" << endl; }
};
class BB : public AA
{
public:
	void Print() { cout << "class : BB" << endl; }
};

int main()
{
#pragma region 가상 함수
	//	상속 클래스 내에서 같은 형태의 함수로 재정의 가능한 함수
	// 
	//	가상 함수는 실행 시간에 상위 클래스에 대한 참조로
	//	하위 클래스에 재정의된 함수를 호출 가능함	
// AA* aa = new AA;
// BB* bb = new BB;
// 
// aa->Print();
// bb->Print();
#pragma endregion

#pragma region 가상함수 포인터
		//	어떤 클래스가 가상함수를 포함하면 객체 주소에 함수 테이블을 생성
	Terran* terran = NULL;
	int input;

	cout << "=======================\n";
	cout << " 1. Vuluture\n";
	cout << " 2. Ghost\n";
	cout << " 3. Goliat\n";
	cout << " 4. Firebatc\n";
	cout << " 5. SiegeTank\n";
	cout << "=======================\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "(" << i + 1 << ") 오브젝트 생성 : ";
		cin >> input;

		switch (input)
		{
		case 1:
			terran = new Vulture();
			break;
		case 2:
			terran = new Ghost();
			break;
		case 3:
			terran = new Goliat();
			break;
		case 4:
			terran = new Firebat();
			break;
		case 5:
			terran = new SiegeTank();
			break;
		default:
			"잘못된 입력입니다.";
			i--;
		}

	}
#pragma endregion


	return 0;
}
