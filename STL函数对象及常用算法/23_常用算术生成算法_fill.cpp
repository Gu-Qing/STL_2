#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

/*
*	fill	//�����������Ԫ��
*		fill(iterator beg, iterator end, value); //value�����ֵ
*/

void MyPrint9(int val) {
	cout << val << " ";
}

int test23() {

	vector<int> v;
	v.resize(10); //Ĭ����0
	for_each(v.begin(), v.end(), MyPrint9);
	cout << endl;

	//�����������
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), MyPrint9);
	cout << endl;


	return 0;
}