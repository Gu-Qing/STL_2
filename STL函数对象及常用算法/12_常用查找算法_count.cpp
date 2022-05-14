#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	count	//统计元素个数
*		count(iterator beg, iterator end, value);
*/

class Person3 {
private:
	string m_Name;
	int m_Age;

public:
	Person3() {}
	Person3(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator== (const Person3& p) const{
		if (p.m_Age == this->m_Age) {
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

int test12() {

	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);

	cout << "count(10) = " << count(v.begin(), v.end(), 10) << endl;

	vector<Person3> vPerson3;

	Person3 p1("a", 10);
	Person3 p2("b", 20);
	Person3 p3("c", 30);
	Person3 p4("d", 30);
	Person3 p5("e", 20);

	vPerson3.push_back(p1);
	vPerson3.push_back(p2);
	vPerson3.push_back(p3);
	vPerson3.push_back(p4);
	vPerson3.push_back(p5);

	Person3 p("f", 20);

	int num = count(vPerson3.begin(), vPerson3.end(), p);
	cout << "age equals to f's num: " << num << endl;

	system("pause");

	return 0;
}