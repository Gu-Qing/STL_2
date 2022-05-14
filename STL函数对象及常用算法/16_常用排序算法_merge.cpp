#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	merge	//容器元素合并，并存储到另一容器中
*		//两个容器必须是有序的，且两个容器的排序方式一致，dest是目标容器开始迭代器
*		merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*/

void MyPrint3(int val) {
	cout << val << " ";
}
int test16() {
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(5 + i);
	}

	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), MyPrint3);
	cout << endl;

	return 0;
}