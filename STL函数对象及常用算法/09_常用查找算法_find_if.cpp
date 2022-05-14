#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
*	find_if	//按条件查找元素
*		find_if(iterator beg, iterator end, _Pred); //_Pred是函数或者谓词(返回bool类型的仿函数)
*/

class GreaterFive {
public :
	bool operator() (const int val) const{
		return val > 5;
	}
};


class Person2 {
private:
	string m_Name;
	int m_Age;

public :
	Person2() {}
	Person2(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string getName() const{
		return this->m_Name;
	}
	int getAge() const{
		return this->m_Age;
	}
};

class Greater20 {
public :
	bool operator() (const Person2& p) const {
		return p.getAge() > 20;
	}
};

int test09() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it != v.end()) {
		cout << "Found num > 5: " << *it << endl;
	}
	else {
		cout << "Not found num > 5" << endl;
	}


	vector<Person2> vPerson2;

	Person2 p1("aa", 10);
	Person2 p2("bb", 20);
	Person2 p3("cc", 30);
	Person2 p4("dd", 40);
	Person2 p5("ee", 50);

	vPerson2.push_back(p1);
	vPerson2.push_back(p2);
	vPerson2.push_back(p3);
	vPerson2.push_back(p4);
	vPerson2.push_back(p5);

	//查找年龄大于20的
	vector<Person2>::iterator pit = find_if(vPerson2.begin(), vPerson2.end(), Greater20());

	if (pit == vPerson2.end()) {
		cout << "Not found age > 20" << endl;
	}
	else {
		cout << "Found age > 20 is : " << (*pit).getAge() << endl;
	}

	return 0;
}