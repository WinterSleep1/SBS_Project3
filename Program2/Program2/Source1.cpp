#include <iostream>

int data = 1;

int main() {

#pragma region ��Ʈ��
	//	��Ʈ�� : �������� �帧
//	<<(���� ������) : �ڽ��� �����ϴ� �� ��ȯ

// int a = -99999;
// 
// std::cout << "int a : " << a << std::endl;
// std::cout << "size of(a) : " << sizeof(a) << std::endl;

	//	>>(���⿬����) : �Է¹��� ���� ���ۿ� ����

// int b = 0;
// std::cin >> b;
// std::cout << "int b : " << b << std::endl;

#pragma endregion

#pragma region ���� ���� ������
			//	���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ���
			//	�������� == �������� ��� ���������� �����
	// int data = 10;
	// 
	// std::cout << "����data : " << data << std::endl;
	// std::cout << "����data : " << ::data << std::endl;
#pragma endregion

#pragma region �����Ҵ�
		//	���α׷� ������ �޸𸮸� �ʿ丸ŭ �Ҵ���
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