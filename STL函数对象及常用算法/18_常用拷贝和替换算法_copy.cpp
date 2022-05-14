#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	copy	//容器内指定范围的元素拷贝到另一容器中
*		copy(iterator beg, iterator end, iterator dest); //dest是目标起始迭代器
*/

void MyPrint5(int val) {
	cout << val << " ";
}

int test18() {

	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), MyPrint5);
	cout << endl;
	vector<int> v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), MyPrint5);
	cout << endl;

	return 0;
}