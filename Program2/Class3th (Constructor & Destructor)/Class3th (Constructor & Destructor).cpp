#include <iostream>

using namespace std;

class Unit
{
private:
	int hp = 10;
	int* kill;

public:
	Unit(int hp) 
	{
		this->hp = hp;		//	this : 자신을 가리키는 포인터
		kill = new int;
		*kill = 0;
	}

	const int& Health() { return hp; }

	Unit(const Unit& clone)
	{
		hp = clone.hp;
		kill = clone.kill;
	}

	~Unit()
	{
		delete kill;
	}

};

int main()
{
#pragma region 복사 생성자
			//	같은 객체를 복사하여 생성
			//	정의를 안하고 객체를 복사하면 기본 복사 생성자가 호출됨 

	// Unit marin0(100);
	// Unit marin1(marin0);
	// 
	// cout << marin0.Health() << endl;
	// cout << marin1.Health() << endl;
	
#pragma endregion

#pragma region 얕은 복사
		//	객체를 복사할 때 주소를 복사하여 메모리를 가리키게 함
		//	같은 객체가 서로다른 메모리를 참조하기에 하나의 객채로 값을 변경하면 전부 변경됨
	// int* ptr1 = new int;
	// int* ptr2 = ptr1;
	// int* ptr3 = ptr2;
	// 
	// *ptr1 = 1011;
	// 
	// cout << "*ptr1 : " << *ptr1 << endl;
	// cout << "&ptr1 : " << ptr1 << endl;
	// cout << "*ptr2 : " << *ptr2 << endl;
	// cout << "&ptr2 : " << ptr2 << endl;
	// cout << "*ptr3 : " << *ptr3 << endl;
	// cout << "&ptr3 : " << ptr3 << endl;
	// 
	// delete ptr1;

	Unit firebat1(100);
	Unit firbat2(firebat1);
#pragma endregion

	return 0;
}
