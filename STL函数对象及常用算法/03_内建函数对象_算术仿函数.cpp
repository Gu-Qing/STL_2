#include <iostream>
#include <functional>

using namespace std;

/*
* 1.算术仿函数
* 实现四则运算。其中negate是一元运算，其他都是二元运算
*	tempalte<class T> T plus<T> //加法仿函数
*	tempalte<class T> T minus<T> //减法仿函数
*	template<class T> T multiplies<T> //乘法仿函数
*	template<class T> T divides<T> //除法仿函数
*	template<class T> T modulus<T> //取模仿函数
*	template<class T> T negate<T> //取反仿函数
*/

int test03() {
	//negate 一元仿函数  取反仿函数
	negate<int> n;
	cout << "negate(50) = " << n(50) << endl;

	//plus 二元仿函数 加法仿函数
	plus<int> plus;
	cout << "plus(10, 20) = " << plus(10, 20) << endl;

	system("pause");

	return 0;
}