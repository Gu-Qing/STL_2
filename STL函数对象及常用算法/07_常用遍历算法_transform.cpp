#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	transform	//搬运容器到另一个容器中
* 		//beg1是原容器的开始迭代器，end1是原容器的结束迭代器，beg2是目标容器开始迭代器,_func是函数或函数对象
*		transform(iterator beg1, iterator end1, iterator beg2, _func);
*/

class Transform {
public :
	int operator() (const int val) const{
		return val + 100;
	}
};

class MyPrint {
public :
	void operator() (int val){
		cout << val << " ";
	}
};

int test07() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), MyPrint());

	cout << endl;

	vector<int> vTarget;
	vTarget.resize(v.size());

	transform(v.begin(), v.end(), vTarget.begin(), Transform());
	for_each(vTarget.begin(), vTarget.end(), MyPrint());

	cout << endl;

	system("pause");

	return 0;
}