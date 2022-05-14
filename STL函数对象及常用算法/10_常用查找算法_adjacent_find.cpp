#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int test10() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(20);
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(10);
	v.push_back(40);
	v.push_back(10);
	v.push_back(20);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end()) {
		cout << "Not found adjacent duplicate elements" << endl;
	}
	else {
		cout << "Found adjacent duplicate element is: " << *it << endl;
	}

	system("pause");

	return 0;
}