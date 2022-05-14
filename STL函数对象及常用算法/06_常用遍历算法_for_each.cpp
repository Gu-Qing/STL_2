#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
*	for_each	//遍历容器
*		for_each(iterator beg, iterator end, _func); //_func是函数或函数对象
*/

//普通函数
void print01(int val) {
	cout << val << " ";
}

//仿函数
class Print02 {
public :
	void operator() (int val) {
		cout << val << " ";
	}
};

int test06() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);
	cout << endl;
	for_each(v.begin(), v.end(), Print02());
	cout << endl;

	system("pause");

	return 0;
}