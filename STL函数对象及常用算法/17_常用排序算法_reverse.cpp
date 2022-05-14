#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	reverse	//反转指定范围的元素
*		reverse(iterator beg, iterator end);
*/

void MyPrint4(int val) {
	cout << val << " ";
}

int test17() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), MyPrint4);
	cout << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint4);
	cout << endl;

	system("pause");

	return 0;
}