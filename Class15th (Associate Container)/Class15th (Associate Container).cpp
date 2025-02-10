#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
#pragma region Iterator
	//	container 원소를 순회하기 위한 포인터
// vector<int> v1;
// vector<int>::iterator iter;
// 
// v1.push_back(10);
// v1.push_back(20);
// v1.push_back(30);
// v1.push_back(40);
// v1.push_back(50);
// 
// for (iter = v1.begin(); iter != v1.end(); iter++) { cout << *iter << " "; }

#pragma endregion

#pragma region set
	// set<int> set;
	// 
	// set.insert(10);
	// set.insert(20);
	// set.insert(30);
	// set.insert(40);
	// set.insert(50);
	// 
	// if (set.find(60) != set.end()) cout << "Find" << endl;
	// else cout << "Not Find" << endl;
	// 
	// set.erase(40);
	// 
	// for (std::set<int>::iterator iter = set.begin(); iter != set.end(); iter++)
	// {
	// 	cout << *iter << endl;
	// }

#pragma endregion

#pragma region map

	// std::map<string, int> map;
	// 
	// map.insert({ "Sword", 1000 });
	// map.insert({ "Shield", 800 });
	// 
	// if (map.find("Bow") != map.end())	cout << "Find" << endl;
	// else								cout << "Not Find" << endl;
	// 
	// map.erase("Sword");
	// 
	// for (std::map<string, int>::iterator iter = map.begin(); iter != map.end(); iter++)
	// {
	// 	cout << iter->first << endl;
	// 	cout << iter->second << endl;
	// }

#pragma endregion


	return 0;
}