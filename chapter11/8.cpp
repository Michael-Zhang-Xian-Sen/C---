/**

* 分析程序执行过程，尤其是调用构造函数和析构函数的过程。

* 答：

* 在调用构造函数的时候，从基类开始，一层层向下调用。在调用析构函数的时候，从子类开始，一层层向上调用。

*/
#include<iostream>

using namespace std;

class A {
public:
	A() {
		cout << "constructing A" << endl;
	}
	~A() {
		cout << "destructing A" << endl;
	}
};

class B :public A {
public:
	B() {
		cout << "constructing B" << endl;
	}
	~B() {
		cout << "destructing B" << endl;
	}
};

class C :public B {
public:
	C() {
		cout << "constructing C" << endl;
	}
	~C() {
		cout << "destructing C" << endl;
	}
};

int main() {
	C c1;
	return 0;
}