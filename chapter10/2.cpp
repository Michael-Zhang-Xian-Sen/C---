#include<iostream>
using namespace std;

class Complex {
public:
	// 无参构造函数
	Complex() {
		real = 0;
		imag = 0;
	}

	// 两个参数时的构造函数
	Complex(double a, double b) :real(a), imag(b) {}

	// 复数加法
	Complex operator + (Complex& a) {
		Complex c;
		c.real = real + a.real;
		c.imag = imag + a.imag;
		return c;
	}

	// 复数减法
	Complex operator - (Complex& a) {
		Complex c;
		c.real = real - a.real;
		c.imag = imag - a.imag;
		return c;
	}

	// 复数乘法
	Complex operator * (Complex& a) {
		Complex c;
		c.real = real * a.real + imag * a.imag;
		c.imag = real * a.imag + imag * a.real;
		return c;
	}

	// 复数除法
	Complex operator / (Complex& a) {
		Complex c;
		c.real = (real*a.real - imag * a.imag)/(a.real * a.real - a.imag * a.imag);
		c.imag = (imag*a.real - real*a.imag)/(a.real * a.real - a.imag * a.imag);
		return c;
	}

	// 显示结果
	void display() {
		cout << "The Complex is : " << real;
		if (imag > 0) {
			cout << " + ";
		}
		cout << imag << "i" << endl;
	}

private:
	double real;
	double imag;
};

int main() {
	Complex a(1, 5), b(2, 3);
	Complex c;
	cout << "a : "; a.display();
	cout << "b : "; b.display();
	cout << "复数加法(a+b) : "; 
	c = a + b;
	c.display();
	cout << "复数减法(a-b) : ";
	c = a - b;
	c.display();
	cout << "复数乘法(a*b) : ";
	c = a * b;
	c.display();
	cout << "复数除法(a/b) : ";
	c = a / b;
	c.display();
	return 0;
}