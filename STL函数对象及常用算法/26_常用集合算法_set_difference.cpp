#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
*	set_difference	//求两个容器的差集
*		v1: 0 1 2 3 4 
*		v2: 3 4 5 6 7 
*		v1和v2的差集——v1中不是v1和v2的交集的数：0 1 2
*		v2和v1的差集——v2中不是v1和v2的交集的数：5 6 7
*		set_difference(iterator beg1, iterator beg1, iterator beg2, iterator end2, iterator dest);
*/

void MyPrint26(int val) {
	cout << val << ' ';
}

int main() {

	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
		v2.push_back(i + 3);
	}

	vector<int> vTarget;
	vTarget.resize(max(v1.size(), v2.size()));

	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd1, MyPrint26);
	cout << endl;

	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd2, MyPrint26);
	cout << endl;

	system("pause");

	return 0;
}