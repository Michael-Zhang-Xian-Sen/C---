#include<iostream>
using namespace std;

class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}

	Complex(double a, double b) :real(a), imag(b) {}

	void display() {
		cout << "The Complex is : " << real;
		if (imag > 0) {
			cout << " + ";
		}
		cout << imag << "i" << endl;

	}

	double real;
	double imag;
};

Complex operator +(Complex &a,Complex &b) {
	Complex c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c;
}

int main() {
	Complex a(1, 5), b(2, 3);
	Complex c = a + b;
	c.display();
	return 0;
}