/**

* 分析程序执行过程，尤其是调用构造函数的过程。

* 答：

* 对于在定义时未给出参数的对象：程序先调用与之匹配的派生类构造函数，在执行派生类构造函数函数体之前，先调用基类构造函数，执行结束后再执行派生类构造函数的函数体。

* 对于在定义时给出参数的对象：程序先调用与之匹配的派生类构造函数，将实参传递给派生类构造函数的形参，派生类构造函数再将其传递给基类构造函数的实参，

* 继而调用基类构造函数。调用结束后再执行派生类构造函数的函数体。 

*/
#include<iostream>

using namespace std;

class A {
public:
	A() {
		cout << "调用默认构造函数，初始化基类！" << endl;
		a = 0;
		b = 0;
	}
	A(int i) {
		cout << "调用具有一个int型形参的构造函数，初始化基类！" << endl;
		a = i;
		b = 0;
	}
	A(int i, int j) {
		cout << "调用具有两个int型形参的构造函数，初始化基类！" << endl;
		a = i;
		b = j;
	}
	void display() {
		cout << "a = " << a << " b = " << b;
	}
private:
	int a;
	int b;
};

class B :public A {
public:
	B() {
		cout << "调用默认构造函数，初始化子类！" << endl;
		c = 0;
	}
	B(int i) :A(i) { 
		cout << "调用拥有一个int型形参的构造函数，初始化子类！" << endl;
		c = 0; 
	}
	B(int i, int j) :A(i, j) {
		cout << "调用具有两个int型形参的构造函数，初始化子类！" << endl;
		c = 0;
	}
	B(int i, int j, int k) :A(i, j) {
		cout << "调用具有三个int型形参的构造函数，初始化子类！" << endl;
		c = k;
	}
	void display1() {
		display();
		cout << " c = " << c << endl;
	}
private:
	int c;
};

int main() {
	// 调用默认构造函数，先调用基类的默认构造函数，再调用子类的默认构造函数。
	B b1;

	B b2(1);
	B b3(1, 3);
	B b4(1, 3, 5);
	b1.display1();
	b2.display1();
	b3.display1();
	b4.display1();
	return 0;
}