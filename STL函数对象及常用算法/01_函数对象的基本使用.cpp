#include <iostream>
#include <set>

using namespace std;

/*
* 1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
* 2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
* 3.�������������Ϊ��������
*/

class MyAdd {
public :
	int operator() (const int v1, const int v2) {
		return v1 + v2;
	}
};

class MyPrint {
private :
	int count; //�ڲ��Լ���״̬
public :
	MyPrint() {
		this->count = 0; 
	}
	void operator() (const string test) {
		cout << test << endl;
		++count;
	}
	int getCount() const {
		return this->count;
	}
};

void doPrint(MyPrint& myPrint, string test) {
	myPrint(test);
}

int test01() {

	//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
	MyAdd myAdd;
	cout << myAdd(10, 20) << endl;

	//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "MyPrint���õĴ���Ϊ��" << myPrint.getCount() << endl;

	//3.�������������Ϊ��������
	MyPrint myPrint1;
	doPrint(myPrint1, "Hello C++");

	system("pause");

	return 0;
}