#include<iostream>
#include<cmath>

using namespace std;

int main() {
	double a, b, c;
	double s, area;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		s = (a + b + c) / 2;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		cout << "����������������ε����Ϊ��" << area << endl;
	}
	else {
		cerr << "���߲����㹹�������ε�������" << endl;
	}
	return 0;
}