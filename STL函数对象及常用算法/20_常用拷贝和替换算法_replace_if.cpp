#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	replace_if	//������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
*		replace(iterator beg, iterator end, _Pred, newValue);
*/

class MyPrint {
public :
	void operator() (const int val) const {
		cout << val << " ";
	}
};

class Greater_20 {
public :
	bool operator() (const int val) const {
		return val > 30;
	}
};
int test20(){

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(20);
	v.push_back(40);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
	replace_if(v.begin(), v.end(), Greater_20(), 1000);
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	system("pause");

	return 0;
}