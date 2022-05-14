#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
*	for_each	//��������
*		for_each(iterator beg, iterator end, _func); //_func�Ǻ�����������
*/

//��ͨ����
void print01(int val) {
	cout << val << " ";
}

//�º���
class Print02 {
public :
	void operator() (int val) {
		cout << val << " ";
	}
};

int test06() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);
	cout << endl;
	for_each(v.begin(), v.end(), Print02());
	cout << endl;

	system("pause");

	return 0;
}