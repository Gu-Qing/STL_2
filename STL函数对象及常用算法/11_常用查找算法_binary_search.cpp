#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

/*
*	binary_search	//���ֲ��ҷ������������в����ã�
*		bool bianry_search(iterator beg, iterator end, value); //����ָ��Ԫ�أ��鵽����true�����򷵻�false
*/

int test11() {

	set<int> s;
	for (int i = 0; i < 10; i++) {
		s.insert(i);
	}
	bool flag = binary_search(s.begin(), s.end(), 8);
	if (flag) {
		cout << "Found element" << endl;
	}
	else {
		cout << "Not found element" << endl;
	}

	system("pause");

	return 0;
}