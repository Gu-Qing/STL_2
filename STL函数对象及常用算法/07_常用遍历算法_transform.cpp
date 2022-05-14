#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	transform	//������������һ��������
* 		//beg1��ԭ�����Ŀ�ʼ��������end1��ԭ�����Ľ�����������beg2��Ŀ��������ʼ������,_func�Ǻ�����������
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