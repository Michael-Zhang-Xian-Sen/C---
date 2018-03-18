/**

* �������ݣ��������������������أ���ʹ����Ԫ������Ҳ��ʹ����ͨ������

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
	
	// ���βι��캯��
	Complex(double a, double b) :real(a), imag(b) {};
	
	double get_real();
	double get_imag();

	// ��ʾ��ǰ����
	void show();
private:
	double real;
	double imag;
};

double Complex::get_real() {
	return real;
}
double Complex::get_imag() {
	return imag;
}

Complex operator +(int& a, Complex& b) {
	return Complex(a + b.get_real(), b.get_imag());
}

Complex operator +(Complex& a, Complex &b) {
	return Complex(a.get_real() + b.get_real(), a.get_imag() + b.get_imag());
}

Complex operator +(Complex& a, int& b) {
	return Complex(a.get_real() + b, a.get_imag());
}

void Complex::show() {
	cout << "(" << real << "," << imag << "i)" << endl;
}


int main() {
	Complex a(1, 2), b(3, 5);
	int c = 1;
	cout << "a = ";
	a.show();
	cout << "b = ";
	b.show();
	cout << "c = " << c << endl;

	cout << "a + b = ";
	(a + b).show();
	cout << "a + c = ";
	(a + c).show();
	cout << "c + b = ";
	(c + b).show();
	return 0;
}