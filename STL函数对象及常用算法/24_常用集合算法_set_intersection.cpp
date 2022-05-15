#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
*	set_intersection	//求两个容器的交集(两个集合必须是有序序列)
*		//返回目标容器的最后一个元素的迭代器地址
*		set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*/

void MyPrint10(int val) {
	cout << val << " ";
}

int test24() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i); //0-9
		v2.push_back(i + 5); //5-14
	}

	vector<int> vTarget;
	//目标容器需要提前开辟空间
	//特殊情况：大容器包含小容器，开辟空间 取小容器的size即可
	vTarget.resize(min(v1.size(), v2.size()));

	for_each(v1.begin(), v1.end(), MyPrint10);
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint10);
	cout << endl << "------------------------------------------" << endl;
	//获取交集。返回目标容器的最后一个元素的迭代器地址
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	
	for_each(vTarget.begin(), itEnd, MyPrint10);
	cout << endl;
	
	return 0;
}