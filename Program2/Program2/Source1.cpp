#include <iostream>

int data = 1;

int main() {

#pragma region 스트림
	//	스트림 : 데이터의 흐름
//	<<(삽입 연산자) : 자신이 참조하는 값 반환

// int a = -99999;
// 
// std::cout << "int a : " << a << std::endl;
// std::cout << "size of(a) : " << sizeof(a) << std::endl;

	//	>>(추출연산자) : 입력받은 값을 버퍼에 저장

// int b = 0;
// std::cin >> b;
// std::cout << "int b : " << b << std::endl;

#pragma endregion

#pragma region 범위 지정 연산자
			//	여러 범위에서 사용되는 식별자를 구분하는데 사용
			//	전역변수 == 지역변수 라면 지역변수를 사용함
	// int data = 10;
	// 
	// std::cout << "지역data : " << data << std::endl;
	// std::cout << "전역data : " << ::data << std::endl;
#pragma endregion

#pragma region 동적할당
		//	프로그램 실행중 메모리를 필요만큼 할당함
	int* ptr = new int;
	*ptr = 100;
	std::cout << "*ptr : " << *ptr << std::endl;
	std::cout << "size of(ptr) : " << sizeof(ptr) << std::endl;
	delete(ptr);
	//	====================================================
	ptr = new int[3];

	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;

	std::cout << "*ptr[0] : " << ptr[0] << std::endl;
	std::cout << "&ptr[0] : " << &ptr[0] << std::endl;

	std::cout << "*ptr[1] : " << ptr[1] << std::endl;
	std::cout << "&ptr[1] : " << &ptr[1] << std::endl;

	std::cout << "*ptr[2] : " << ptr[2] << std::endl;
	std::cout << "&ptr[2] : " << &ptr[2] << std::endl;

	delete[] ptr;
#pragma endregion

	return 0;
}