#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	set_union	//求两个容器的并集
*		//返回并集中最后一个元素的位置迭代器
*		set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*/

void MyPrint25(int val) {
	cout << val << " ";
}

int test25() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());

	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, MyPrint25);

	cout << endl;

	system("pause");

	return 0;
}