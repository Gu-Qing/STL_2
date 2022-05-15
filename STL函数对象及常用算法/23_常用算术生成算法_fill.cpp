#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

/*
*	fill	//向容器中添加元素
*		fill(iterator beg, iterator end, value); //value是填充值
*/

void MyPrint9(int val) {
	cout << val << " ";
}

int test23() {

	vector<int> v;
	v.resize(10); //默认是0
	for_each(v.begin(), v.end(), MyPrint9);
	cout << endl;

	//后期重新填充
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), MyPrint9);
	cout << endl;


	return 0;
}