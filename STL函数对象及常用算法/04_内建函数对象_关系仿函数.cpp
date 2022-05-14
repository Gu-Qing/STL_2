#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

/*
* 2.��ϵ�º���
* ʵ�ֹ�ϵ�Ա�
*	template<class T> bool equal_to<T> //����
*	template<class T> bool not_equal_to<T> //������
*	template<class T> bool greater<T> //����
*	template<class T> bool greater_equal<T> //���ڵ���
*	template<class T> bool less<T> //С��
*	template<class T> bool less_equal<T> //С�ڵ���
*/

class MyCompare2 {
private :
	int a;
public :
	//����()�����const�����˺����������޸���ĳ�Ա
	bool operator() (const int v1, const int v2) const{ 
		return v1 > v2;
		//this->a = 10;
	}
};

void printVector2(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test04() {

	//template<class T> bool greater<T> //����  �Ƚϳ���

	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	printVector2(v);

	//sort(v.begin(), v.end(), MyCompare2());
	//greater<int>() �ڽ��ĺ�������
	//sortԴ���У�����������Ĭ���Ǵ���less<>()
	sort(v.begin(), v.end(), greater<int>());
	printVector2(v);

	return 0;
}