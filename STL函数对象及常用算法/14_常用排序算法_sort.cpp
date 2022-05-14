#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

/*
*	sort	//对容器内元素进行排序
*		sort(iterator beg, iterator end, _Pred); //_Pred是谓词
*/

void MyPrint(int val) {
	cout << val << " ";
}

int test14() {

	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(0);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	system("pause");

	return 0;
}