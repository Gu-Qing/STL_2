#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

/*
* 2.关系仿函数
* 实现关系对比
*	template<class T> bool equal_to<T> //等于
*	template<class T> bool not_equal_to<T> //不等于
*	template<class T> bool greater<T> //大于
*	template<class T> bool greater_equal<T> //大于等于
*	template<class T> bool less<T> //小于
*	template<class T> bool less_equal<T> //小于等于
*/

class MyCompare2 {
private :
	int a;
public :
	//函数()后面加const表明此函数不可以修改类的成员
	bool operator() (const int v1, const int v2) const{ 
		return v1 > v2;
		//this->a = 10;
	}
};

void printVector2(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test04() {

	//template<class T> bool greater<T> //大于  比较常用

	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	printVector2(v);

	//sort(v.begin(), v.end(), MyCompare2());
	//greater<int>() 内建的函数对象
	//sort源码中，第三个参数默认是传入less<>()
	sort(v.begin(), v.end(), greater<int>());
	printVector2(v);

	return 0;
}