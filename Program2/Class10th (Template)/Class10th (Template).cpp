#include <iostream>

using namespace std;

template <typename T>
class List
{
private:
	int size;
	int index;
	T* ptr;

public:
	List()
	{
		size = 0;
		index = 0;
		ptr = nullptr;
	}

	void Resize(int size)
	{
		this->size = size;
		ptr = new T[size];

		for (int i = 0; i < size; i++)
		{
			ptr[i] = 0;
		}
	}

	void Add(T data)
	{
		if (index >= size) { cout << "Over Flow" << endl; }
		else ptr[index++] = data;
	}

	const T& operator [](int index)
	{
		return ptr[index];
	}

	~List()
	{
		if (ptr != nullptr) delete[] ptr;
	}

};

template <typename S>
bool Same(S a, S b)
{
	return a == b;
}

template<>
bool Same(const char* a, const char* b)
{
	return strlen(a) == strlen(b);
}


int main()
{
#pragma region 템플릿
	//	데이터 형식에 의존하지 않고
	//	하나의 값이 여러 데이터 형식을 가짐
// List<int> list;
// 
// list.Resize(5);
// 
// list.Add(1);
// list.Add(2);
// list.Add(3);
// list.Add(4);
// list.Add(5);
// 
// list.Add(6);	//	오버 플로우
// 
// for (int i = 0; i < 5; i++) { cout << list[i] << endl; }
#pragma endregion

#pragma region 템플릿 특수화
			//	특정 자료형에 대해 다르게 처리하기기 위한 기능
	// char a = 65;
	// cout << Same(2, 3) << endl;
	// cout << Same(1.1, 1 + 0.1) << endl;
	// cout << Same(a, 'A') << endl;
	// 	
	// cout << Same("C##", "C++") << endl;
#pragma endregion

	return 0;
}