/**

* �������ݣ�����ת�����캯���Լ�����ת��������

*/
#include<iostream>
using namespace std;

class Complex {
public:
	// �޲ι��캯��
	Complex() {
		real = 0;
		imag = 0;
	}

	// ����������ת�����캯��
	Complex(double r) {
		real = r;
		imag = 0;
	}

	// ���βι��캯��
	Complex(double a, double b) :real(a), imag(b) {};

	// ��������������ת������
	operator double() {
		return real;
	}

	// ��ʾ��ǰ����
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