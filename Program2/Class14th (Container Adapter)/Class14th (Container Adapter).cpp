#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
#pragma region Stack
	//	Stack : 후입선출
// stack<int> stack;
// 
// stack.push(10);
// stack.push(20);
// stack.push(30);
// stack.push(40);
// 
// cout << "stack.size() : " << stack.size() << endl;
// 
// for (int i = 0; i < stack.size();)
// {
// 	cout << stack.top() << " ";
// 	stack.pop();
// }

// while (!stack.empty())				//	for문의 결과와 같음
// {
//    	cout << stack.top() << " ";
// 	    stack.pop();
// }

#pragma endregion

#pragma region Queue
		//	Queue : 선입선출
	// queue<int> que;
	// 
	// que.push(10);
	// que.push(20);
	// que.push(30);
	// que.push(40);
	// que.push(50);
	// 
	// for (int i = 0; i < que.size();)
	// {
	// 	cout << que.front() << endl;
	// 	que.pop();
	// }
#pragma endregion

	return 0;
}