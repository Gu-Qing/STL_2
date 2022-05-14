#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

/*
*	binary_search	//二分查找法（无序序列中不可用）
*		bool bianry_search(iterator beg, iterator end, value); //查找指定元素，查到返回true，否则返回false
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