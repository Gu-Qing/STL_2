#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* ν�ʣ�
* 1.����bool���͵ķº�����Ϊν��
* 2.���operator()����һ����������ô����һԪν��
* 3.���operator()����������������ô������Ԫν��
*/

//һԪν��
class GreaterFive {
public :
	bool operator() (int val) { 
		return val > 5;
	}
};
void test002() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	// GreaterFive()�������ĺ������󡣵�����������Ҫ���뺯������

	/*
	// FUNCTION TEMPLATE find_if
	template <class _InIt, class _Pr>
	_NODISCARD _CONSTEXPR20 _InIt find_if(_InIt _First, const _InIt _Last, _Pr _Pred) { // find first satisfying _Pred
		_Adl_verify_range(_First, _Last);
		auto _UFirst      = _Get_unwrapped(_First);
		const auto _ULast = _Get_unwrapped(_Last);
		for (; _UFirst != _ULast; ++_UFirst) {
			//�������������Ǵ���ĺ����������ص�С����ȥ���õ�������ȡ�õ�ֵ
			if (_Pred(*_UFirst)) { 
				break;
			}
		}
		_Seek_wrapped(_First, _UFirst);
		return _First; //���ص�Ҳ�ǵ��������ҵ��˾ͷ����ҵ��ĵ�����λ�ã��Ҳ����ͷ���end�ĵ�����λ��
	}
	*/

	// ���������� ��û�д���5�����֣��еĻ����ص�һ������5�����ֵĵ�����λ��
	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos != v.end()) {
		cout << "�ҵ��˵�һ������5�����֣��ǣ�" << *pos << endl;
	}
	else {
		cout << "û���ҵ�����5�����֣�" << endl;
	}
}

//��Ԫν��
class MyCompare {
public :
	//
	bool operator() (const int v1, const int v2) {
		return v1 > v2;
	}
};
void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test102() {
	vector<int> v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());
	printVector(v);

	//ʹ�ú������󣬸ı��㷨���ԣ���Ϊ�Ӵ�С����
	//����������ǰ��������������䣬���һ�����뺯���������ﴫ��������������
	sort(v.begin(), v.end(), MyCompare());
	printVector(v);
}

int test02() {

	test002();
	cout << "----------------------------------" << endl;
	test102();
	
	system("pause");

	return 0;
}