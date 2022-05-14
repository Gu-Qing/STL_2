#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

/*
*	random_shuffle	//ϴ�ƣ�ָ����Χ�ڵ�Ԫ�������������
*		random_shuffle(iterator beg, iterator end);
*/

void MyPrint2(int val) {
	cout << val << " ";
}

int test15() {

	srand((unsigned int)time(0));

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), MyPrint2);
	cout << endl;
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint2);
	cout << endl;

	system("pause");

	return 0;
}