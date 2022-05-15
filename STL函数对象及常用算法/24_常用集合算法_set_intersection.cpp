#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
*	set_intersection	//�����������Ľ���(�������ϱ�������������)
*		//����Ŀ�����������һ��Ԫ�صĵ�������ַ
*		set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
*/

void MyPrint10(int val) {
	cout << val << " ";
}

int test24() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i); //0-9
		v2.push_back(i + 5); //5-14
	}

	vector<int> vTarget;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	//�������������������С���������ٿռ� ȡС������size����
	vTarget.resize(min(v1.size(), v2.size()));

	for_each(v1.begin(), v1.end(), MyPrint10);
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint10);
	cout << endl << "------------------------------------------" << endl;
	//��ȡ����������Ŀ�����������һ��Ԫ�صĵ�������ַ
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	
	for_each(vTarget.begin(), itEnd, MyPrint10);
	cout << endl;
	
	return 0;
}