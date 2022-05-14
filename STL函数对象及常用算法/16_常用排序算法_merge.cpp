#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	merge	//����Ԫ�غϲ������洢����һ������
*		//������������������ģ�����������������ʽһ�£�dest��Ŀ��������ʼ������
*		merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*/

void MyPrint3(int val) {
	cout << val << " ";
}
int test16() {
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(5 + i);
	}

	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), MyPrint3);
	cout << endl;

	return 0;
}