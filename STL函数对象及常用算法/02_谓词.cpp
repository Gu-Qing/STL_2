#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* 谓词：
* 1.返回bool类型的仿函数称为谓词
* 2.如果operator()接受一个参数，那么叫做一元谓词
* 3.如果operator()接受两个参数，那么叫做二元谓词
*/

//一元谓词
class GreaterFive {
public :
	bool operator() (int val) { 
		return val > 5;
	}
};
void test002() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	// GreaterFive()是匿名的函数对象。第三个参数需要传入函数对象

	/*
	// FUNCTION TEMPLATE find_if
	template <class _InIt, class _Pr>
	_NODISCARD _CONSTEXPR20 _InIt find_if(_InIt _First, const _InIt _Last, _Pr _Pred) { // find first satisfying _Pred
		_Adl_verify_range(_First, _Last);
		auto _UFirst      = _Get_unwrapped(_First);
		const auto _ULast = _Get_unwrapped(_Last);
		for (; _UFirst != _ULast; ++_UFirst) {
			//这里是利用我们传入的函数对象重载的小括号去调用迭代器中取得的值
			if (_Pred(*_UFirst)) { 
				break;
			}
		}
		_Seek_wrapped(_First, _UFirst);
		return _First; //返回的也是迭代器，找到了就返回找到的迭代器位置，找不到就返回end的迭代器位置
	}
	*/

	// 查找容器中 有没有大于5的数字，有的话返回第一个大于5的数字的迭代器位置
	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos != v.end()) {
		cout << "找到了第一个大于5的数字，是：" << *pos << endl;
	}
	else {
		cout << "没有找到大于5的数字！" << endl;
	}
}

//二元谓词
class MyCompare {
public :
	//
	bool operator() (const int v1, const int v2) {
		return v1 > v2;
	}
};
void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test102() {
	vector<int> v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());
	printVector(v);

	//使用函数对象，改变算法策略，变为从大到小排序
	//三个参数，前两个是排序的区间，最后一个传入函数对象，这里传入匿名函数对象
	sort(v.begin(), v.end(), MyCompare());
	printVector(v);
}

int test02() {

	test002();
	cout << "----------------------------------" << endl;
	test102();
	
	system("pause");

	return 0;
}