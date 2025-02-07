#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main()
{
#pragma region Vector container
	// vector<int> v1;
	// 
	// v1.reserve(10);
	// 
	// for(int i = 1; i <= v1.capacity(); i++) { v1.push_back( i * 10 ); }
	// 
	// v1.pop_back();	//	v[4] deleted
	// v1.pop_back();	//	v[3] deleted
	// 
	// cout << "v1.capacity() : " << v1.capacity() << endl;
	// cout << "v1.size() : " << v1.size() << endl;
	// 
	// for (int i = 0; i < v1.size(); i++) { cout << v1[i] << " "; }


#pragma endregion

#pragma region lsit container
	// list<int> list;
	// 
	// list.push_back(20);		//	[20]
	// list.push_back(30);		//	[20] - [30]
	// 
	// list.push_front(10);		//	[10] - [20] - [30]
	// 
	// list.pop_front();
	// list.assign(3, 5);		//	[5] - [5] - [5] (3개의 배열을 5로 초기화)
	// 
	// cout << list.size() << endl;	
#pragma endregion

#pragma region deque container
	deque<int> deque;

	deque.push_back(10);
	deque.push_back(15);
	deque.push_back(4);			//	[10] [15] [4]

	deque.push_front(20);
	deque.push_front(10);
	deque.push_front(5);		//	[5] [10] [20] [10] [15] [4]

	deque.pop_back();			//	마지막 원소 제거
	deque.pop_front();			//	앞 원소 제거
	//	모든 원소 출력
	for (int i = 0; i < deque.size(); i++) { cout << deque[i] << " "; }

#pragma endregion

	return 0;
}