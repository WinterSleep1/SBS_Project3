#include <iostream>

class GameObject
{
#pragma region 접근 지정자
		//	클래스 내부 속성들의 접근 범위를 지정함
		//	public (공개) , private (접근X) , protected (상속X)
#pragma endregion
private:
	int x;

protected:
	int y;

public:
	int z;

	int Z() 
	{
		return z;
	}
};

void Swap(int& x, int& y) 
{
	int c;

	c = x;
	x = y;
	y = c;
}

int main()
{
#pragma region 클래스
	
		//	클래스 내부 변수 : 메모리 포함
		//	정적변수, 함수의 메모리는 포함되지않음

	// GameObject object1;		//	Stack 영역
	// GameObject object2;
	// GameObject object3;
	// 
	// object1.z = 5;
	// object2.z = 10;
	// object3.z = 20;
	// 
	// std::cout << "GameObject z(1) : " << object1.Z() << std::endl;
	// std::cout << "GameObject z(2) : " << object2.Z() << std::endl;
	// std::cout << "GameObject z(3) : " << object3.Z() << std::endl;
	
#pragma endregion

#pragma region 참조자
			//	어떤 변수의 메모리에 다른 이름을 지정하는 지정자
	// int data = 10;
	// int &reference = data;
	// 
	// std::cout << "data : " << data << std::endl;
	// std::cout << "reference : " << reference << std::endl;
	// 
	// reference = 20;
	// 
	// std::cout << "data : " << data << std::endl;
	// std::cout << "reference : " << reference << std::endl;
	//===========================================================================================
	int a = 10, b = 20;

	Swap(a, b);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
#pragma endregion

	return 0;
}
