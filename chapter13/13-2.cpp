#include<iostream>

using namespace std;


int main() {
	double a, b;
	cin >> a >> b;
	cout.precision(3);
	cout.setf(ios::right);
	cout.setf(ios::fixed);
	cout << endl <<  a << endl;
	
	int n;
	for (n = 1; pow(10,n)<=int(a); n++) {
	}
	cout.width(n+4);
	cout << b << endl;

	return 0;
}