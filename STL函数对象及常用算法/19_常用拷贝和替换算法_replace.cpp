#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	replace	//将容器内指定范围的所有旧元素修改为新元素
*		replace(iterator beg, iterator end, oldvalue, newvalue);
*/

void MyPrint6(int val) {
	cout << val << ' ';
}

int test19() {

	vector<int> v;
	v.push_back(10);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	for_each(v.begin(), v.end(), MyPrint6);
	cout << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), MyPrint6);
	cout << endl;

	system("pause");

	return 0;
}