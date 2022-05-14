#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	swap	//互换两个容器的元素
*		swap(container c1, container c2); // c1和c2是容器
*/

void MyPrint7(int val) {
	cout << val << " ";
}

int test21() {

	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 20);
	}
	cout << "Before swap: " << endl;
	for_each(v1.begin(), v1.end(), MyPrint7);
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint7);
	cout << endl;

	cout << "After swap: " << endl;

	swap(v1, v2);
	for_each(v1.begin(), v1.end(), MyPrint7);
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint7);
	cout << endl;

	system("pause");

	return 0;
}