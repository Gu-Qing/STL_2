#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

/*
*	accumulate	//��������Ԫ���ۼ��ܺ�
*		accumulate(iterator beg, iterator end, value); //value����ʼ�ۼ�ֵ
*/

int test22() {

	vector<int> v;

	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	}
	cout << "sum = " << accumulate(v.begin(), v.end(), 0) << endl;

	system("pause");

	return 0;
}