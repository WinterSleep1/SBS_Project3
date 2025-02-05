#include <iostream>
using namespace std;

class Packet
{
private:
	int errorCode = -9999;

public:

	const int& ErrorCode() { return errorCode; }

	Packet() { cout << "Created Packet" << endl; };
	~Packet() { cout << "Deleted Packet" << endl; };
};
class Resource
{
private:
	shared_ptr<Resource> ptr1;

public:
	Resource() { cout << "Creat" << endl; };
	~Resource() { cout << "Delete" << endl; };

	void Share(const shared_ptr<Resource>& ptr2) { ptr1 = ptr2; }
};
class Character
{
private:
	weak_ptr<Character> ptr1;

public:
	Character() { cout << "Creat" << endl; }
	~Character() { cout << "Delete" << endl; }

	void Partner(const weak_ptr<Character>& ptr2) { ptr1 = ptr2; }
};

int main()
{
#pragma region 스마트 포인터
	//	포인터를 생성과 동시에 자동으로 메모리를 관리
	//	경계 확인도 가능한 추상 데이터 포인터 형식
#pragma region unique pointer
			//	특정한 개체를 하나의 스마트 포인터만 가리킬 수 있도록 된 포인터
	// unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	// 
	// cout << "Unique Pointer Error Code : " << uniquePointer->ErrorCode() << endl;
	// 
	// unique_ptr<Packet> uniqueReference = move(uniquePointer);
	// 
	// cout << "Unique Refernce Error Code : " << uniqueReference->ErrorCode() << endl;

#pragma endregion

#pragma region shared pointer
			//	하나의 객체를 여러 포인터가 가리킴
			//	모든 포인터가 객체를 필요요 하지 않을 때 객체를 해제함
	// shared_ptr<Resource> oil = make_shared<Resource>();
	// shared_ptr<Resource> mineral = make_shared<Resource>();
	// 
	// oil->Share(mineral);
	// mineral->Share(oil);
				//	서로 참조중일때 use_count 가 0이되지 않으므로 소멸자가 실행 안함
	// cout << oil.use_count() << endl;
	// cout << mineral.use_count() << endl;

#pragma endregion

#pragma region weak pointer
			//	자원 객체를 소유하지 않으므로 공유 포인터로 관리되는
			//	자원 객체를 가리켜서 참조 개수에 영항을 안주는 포인터
	shared_ptr<Character> a = make_shared<Character>();
	shared_ptr<Character> b = make_shared<Character>();

	a->Partner(b);
	b->Partner(a);

	cout << a.use_count() << endl;
	cout << b.use_count() << endl;

#pragma endregion


#pragma endregion


	return 0;
}