#include <iostream>
#include <functional>

using namespace std;

/*
* 1.�����º���
* ʵ���������㡣����negate��һԪ���㣬�������Ƕ�Ԫ����
*	tempalte<class T> T plus<T> //�ӷ��º���
*	tempalte<class T> T minus<T> //�����º���
*	template<class T> T multiplies<T> //�˷��º���
*	template<class T> T divides<T> //�����º���
*	template<class T> T modulus<T> //ȡģ�º���
*	template<class T> T negate<T> //ȡ���º���
*/

int test03() {
	//negate һԪ�º���  ȡ���º���
	negate<int> n;
	cout << "negate(50) = " << n(50) << endl;

	//plus ��Ԫ�º��� �ӷ��º���
	plus<int> plus;
	cout << "plus(10, 20) = " << plus(10, 20) << endl;

	system("pause");

	return 0;
}