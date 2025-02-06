#include <iostream>
#include <thread>
using namespace std;

void Input()
{
	for (int i = 0; i < 10; i++) { cout << "input!" << endl; }
}
void Render()
{
	for (int i = 0; i < 10; i++) { cout << "render!" << endl; }
}

int main()
{
#pragma region 스레드
	//	프로세스 내에서 실행되는 작업 단위
// thread thread1(Input);
// thread thread2(Render);
// 
// thread1.join();
// thread2.join();
#pragma endregion

	return 0;
}