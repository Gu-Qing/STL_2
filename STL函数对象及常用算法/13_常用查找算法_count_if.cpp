#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

/*
*	count_if	//按条件统计元素个数
*		count_if(iterator beg, iterator end, _Pred); //_Pred是谓词
*/

class Greater20 {
public :
	bool operator() (const int val) const{
		return val > 2;
	}
};

class Person4 {
private :
	string m_Name;
	int m_Age;

public :
	Person4(){}
	Person4(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string getName() const {
		return this->m_Name;
	}
	int getAge() const {
		return this->m_Age;
	}
};

class AgeGreater20 {
public :
	bool operator() (const Person4& p) const {
		return p.getAge() > 20;
	}
};

int test13() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "The num greater 2: " << num << endl;


	vector<Person4> vPerson4;

	Person4 p1("aa", 20);
	Person4 p2("bb", 40);
	Person4 p3("cc", 30);
	Person4 p4("dd", 40);
	Person4 p5("ee", 20);
	Person4 p6("ff", 20);

	vPerson4.push_back(p1);
	vPerson4.push_back(p2);
	vPerson4.push_back(p3);
	vPerson4.push_back(p4);
	vPerson4.push_back(p5);
	vPerson4.push_back(p6);

	num = count_if(vPerson4.begin(), vPerson4.end(), AgeGreater20());
	cout << "The num of age greater 20: " << num << endl;

	system("pause");

	return 0;
}
