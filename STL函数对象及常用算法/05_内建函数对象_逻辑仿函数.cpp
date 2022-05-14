#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

/*
* 3.逻辑仿函数
* 实现逻辑运算
*	template<class T> bool logical_and<T> //逻辑与
*	template<class T> bool logical_or<T> //逻辑或
*	template<class T> bool logical_not<T> //逻辑非
*/

void printVector3(vector<bool> &v) {
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
int test05() {

	vector<bool> v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	printVector3(v);

	//利用逻辑非，将容器v搬运到v2中,并做取反操作
	vector<bool> v2;
	v2.resize(v.size()); //要先给这个容器开辟空间
	//搬运算法
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	printVector3(v2);

	system("pause");

	return 0;
}