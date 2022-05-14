#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	find	//查找元素
*		find(iterator beg, iterator end, value); //找到返回指定元素的迭代器，找不到返回结束迭代器
*/

class Person {
private :
	string m_Name;
	int m_Age;

public :
	Person() {}
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator== (const Person& p) const{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}

	string getName() const {
		return this->m_Name;
	}
	int getAge() const {
		return this->m_Age;
	}
};

int test08() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) {
		cout << "Not found element!" << endl;
	}
	else {
		cout << "Found element!" << endl;
	}

	vector<Person> vPerson;

	Person p1("A", 10);
	Person p2("B", 20);
	Person p3("C", 30);
	Person p4("D", 40);
	Person p5("E", 50);

	vPerson.push_back(p1);
	vPerson.push_back(p2);
	vPerson.push_back(p3);
	vPerson.push_back(p4);
	vPerson.push_back(p5);

	//底层源码中的find是直接使用==进行数据对比的，所以自定义数据类型需要重载==符号
	//template <class _InIt, class _Ty>
	//_NODISCARD constexpr _InIt _Find_unchecked1(_InIt _First, const _InIt _Last, const _Ty & _Val, false_type) {
	//	// find first matching _Val
	//	for (; _First != _Last; ++_First) {
	//		if (*_First == _Val) {
	//			break;
	//		}
	//	}
	//	return _First;
	//}

	//Person pp("aa", 10);
	Person pp("A", 10);
	vector<Person>::iterator pos = find(vPerson.begin(), vPerson.end(), pp);
	if (pos == vPerson.end()) {
		cout << "Not Found pp" << endl;
	}
	else {
		cout << "Found pp" << endl;
		cout << "Name: " << pos->getName() << " Age: " << pos->getAge() << endl;
	}

	system("pause");

	return 0;
}