/**

* 考察内容：考察转换构造函数以及类型转换函数。

*/
#include<iostream>
using namespace std;

class Complex {
public:
	// 无参构造函数
	Complex() {
		real = 0;
		imag = 0;
	}

	// 声明及定义转换构造函数
	Complex(double r) {
		real = r;
		imag = 0;
	}

	// 两形参构造函数
	Complex(double a, double b) :real(a), imag(b) {};

	// 声明及定义类型转换函数
	operator double() {
		return real;
	}

	// 显示当前虚数
	void show();
private:
	double real;
	double imag;
};

void Complex::show() {
	cout << "(" << real << "," << imag << "i)" << endl;
}

int main() {
	Complex a(1, 2), b;
	double d1 = 2.1;
	cout << "a = ";
	a.show();
	cout << "d1 = " << d1 << endl;
	d1 = d1 + a;
	cout << "d1 + a = " << d1 << endl;
	cout << "b = ";
	b = Complex(d1);
	b.show();

	return 0;
}