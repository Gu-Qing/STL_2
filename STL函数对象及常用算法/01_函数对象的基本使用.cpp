#include <iostream>
#include <set>

using namespace std;

/*
* 1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
* 2.函数对象超出普通函数的概念，函数对象可以有自己的状态
* 3.函数对象可以作为参数传递
*/

class MyAdd {
public :
	int operator() (const int v1, const int v2) {
		return v1 + v2;
	}
};

class MyPrint {
private :
	int count; //内部自己的状态
public :
	MyPrint() {
		this->count = 0; 
	}
	void operator() (const string test) {
		cout << test << endl;
		++count;
	}
	int getCount() const {
		return this->count;
	}
};

void doPrint(MyPrint& myPrint, string test) {
	myPrint(test);
}

int test01() {

	//1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
	MyAdd myAdd;
	cout << myAdd(10, 20) << endl;

	//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "MyPrint调用的次数为：" << myPrint.getCount() << endl;

	//3.函数对象可以作为参数传递
	MyPrint myPrint1;
	doPrint(myPrint1, "Hello C++");

	system("pause");

	return 0;
}