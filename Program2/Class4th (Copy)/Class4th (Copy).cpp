#include <iostream>

using namespace std;

class Terran
{
protected:
	int hp;
	int def;
};
class Marine : public Terran
{
private:
	int atk;

public:
	Marine() 
	{
		atk = 6;
		def = 0;
		hp = 40;
	}

	void State()
	{
		cout << "HP : " << hp << endl;
		cout << "DEF : " << def << endl;
		cout << "ATK : " << atk << endl;
	}
};
class Firebat : public Terran
{
private:
	int atk;

public:
	Firebat()
	{
		atk = 16;
		def = 1;
		hp = 50;
	}

	void State()
	{
		cout << "HP : " << hp << endl;
		cout << "DEF : " << def << endl;
		cout << "ATK : " << atk << endl;
	}
};
class Ghost : public Terran
{
private:
	int atk;

public:
	Ghost()
	{
		atk = 10;
		def = 0;
		hp = 45;
	}

	void State()
	{
		cout << "HP : " << hp << endl;
		cout << "DEF : " << def << endl;
		cout << "ATK : " << atk << endl;
	}
};

int main()
{
#pragma region 캡슐화
		//	클래스 안에 서로 연관된 속성과 기능을 하나로 구현하여 데이터 보호
		//	사용자에게 인터페이스 제공함

#pragma endregion

#pragma region 상속
		//	상위 클래스 속성을 하위 클래스에게 부여함
		//	상위 클래스는 하위 클래스의 속성을 확인 못함

	// Terran terran;		//	terran 의 크기 = 8btye
	// Marine marine;
	// Firebat firebat;
	// Ghost ghost;
	// 
	// marine.State();
	// firebat.State();
	// ghost.State();

#pragma endregion
}
