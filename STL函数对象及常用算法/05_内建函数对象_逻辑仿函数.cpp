#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

/*
* 3.�߼��º���
* ʵ���߼�����
*	template<class T> bool logical_and<T> //�߼���
*	template<class T> bool logical_or<T> //�߼���
*	template<class T> bool logical_not<T> //�߼���
*/

void printVector3(vector<bool> &v) {
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
int test05() {

	vector<bool> v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	printVector3(v);

	//�����߼��ǣ�������v���˵�v2��,����ȡ������
	vector<bool> v2;
	v2.resize(v.size()); //Ҫ�ȸ�����������ٿռ�
	//�����㷨
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	printVector3(v2);

	system("pause");

	return 0;
}