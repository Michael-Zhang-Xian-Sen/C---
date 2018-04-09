#include<iostream>
using namespace std;

int main() {
	char ch = 'B';
	cout.setf(ios::right);
	for (int i = 0; i < 8; i++) {
		cout.width(8-i);
		for (int j = 0; j < i * 2 + 1;j++) {
			cout<< ch;
		}
		cout << endl;
	}
	return 0;
}