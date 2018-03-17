#include<iostream>
using namespace std;

class Complex {
public:
	// �޲ι��캯��
	Complex() {
		real = 0;
		imag = 0;
	}

	// ��������ʱ�Ĺ��캯��
	Complex(double a, double b) :real(a), imag(b) {}

	// �����ӷ�
	Complex operator + (Complex& a) {
		Complex c;
		c.real = real + a.real;
		c.imag = imag + a.imag;
		return c;
	}

	// ��������
	Complex operator - (Complex& a) {
		Complex c;
		c.real = real - a.real;
		c.imag = imag - a.imag;
		return c;
	}

	// �����˷�
	Complex operator * (Complex& a) {
		Complex c;
		c.real = real * a.real + imag * a.imag;
		c.imag = real * a.imag + imag * a.real;
		return c;
	}

	// ��������
	Complex operator / (Complex& a) {
		Complex c;
		c.real = (real*a.real - imag * a.imag)/(a.real * a.real - a.imag * a.imag);
		c.imag = (imag*a.real - real*a.imag)/(a.real * a.real - a.imag * a.imag);
		return c;
	}

	// ��ʾ���
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
	cout << "�����ӷ�(a+b) : "; 
	c = a + b;
	c.display();
	cout << "��������(a-b) : ";
	c = a - b;
	c.display();
	cout << "�����˷�(a*b) : ";
	c = a * b;
	c.display();
	cout << "��������(a/b) : ";
	c = a / b;
	c.display();
	return 0;
}