#include <iostream>

using namespace std;

class Vecter2
{
private:
	int x;
	int y;
public:
	Vecter2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	const int& X() { return x; }
	const int& Y() { return y; }
	//	전위
	Vecter2& operator++()
	{
		this->x++;
		this->y++;
		return *this;
	}
	Vecter2& operator--()
	{
		this->x--;
		this->y--;
		return *this;
	}
	//	후위
	Vecter2& operator++(int)
	{
		Vecter2 clone(x, y);

		this->x++;
		this->y++;

		return clone;
	}
	Vecter2& operator--(int)
	{
		Vecter2 clone(x, y);

		this->x--;
		this->y--;

		return clone;
	}
};

int main()
{
#pragma region 추상클래스
	//	함수를 선언하고 정의는 하지않는 클래스
	//	정의가 없는 함수가 있으므로 객체 생성 못함

// Paint* paint = new Brush();
// 
// paint->Draw();
// delete paint;
// 
// paint = new Penceil();
// 
// paint->Draw();
// delete paint;

#pragma endregion

#pragma region 가상 소멸자
		//		객체가 소멸시 현재 참조하고 있는 객체와 상관없이 모두 호출되는 소멸자
		//		상속된 객체가 소멸시 하위 클래스의 소멸자가 먼저 실행되고 상위 클래스 소멸자가 실행됨
		//		
#pragma endregion

#pragma region 연산자 오버라이딩
			//	연산자를 재정의
	// Vecter2 vec1(1, 3);
	// Vecter2 vec2(10, 20);
	// ++vec1;
	// vec2--;
	// 
	// cout << vec1.X() << " " << vec1.Y() << endl;
	// cout << vec2.X() << " " << vec2.Y() << endl;

#pragma endregion		

	return 0;
}