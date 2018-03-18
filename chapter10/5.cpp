/**

* �������ݣ�˫Ŀ������Լ������������������ȡ����������ء�

*/
#include<iostream>
using namespace std;

class Matrix {
public:
	Matrix() {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				elem[i][j] = 0;
			}
		}
	}

	Matrix(double a[2][3]) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				elem[i][j] = a[i][j];
			}
		}
	}

	Matrix operator + (Matrix& a) {
		double b[2][3];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				b[i][j] = elem[i][j] + a.elem[i][j];
			}
		}
		return Matrix(b);
	}

	friend istream& operator >> (istream&, Matrix&);
	friend ostream& operator << (ostream&, Matrix&);
	
	void show() {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << elem[i][j] << " ";
			}
			cout << endl;
		}
	}

private:
	double elem[2][3];
};

istream& operator >> (istream &input, Matrix &a) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			input >> a.elem[i][j];
		}
	}
	return input;
}

ostream& operator << (ostream &output, Matrix &a) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			output << a.elem[i][j] << " ";
		}
		output << endl;
	}
	return output;
}
int main() {
	Matrix a;
	Matrix b;
	cout << "����Ŀ���漰�����СΪ2*3." << endl << endl;
	cout << "���������A��ֵ ��" << endl;
	cin >> a;
	cout << "���������B��ֵ ��" << endl;
	cin >> b;
	cout << endl << endl;
	cout << "����AΪ��" << endl << a;
	cout << "����BΪ��" << endl << b;
	cout << "����A+BΪ��" << endl << (a+b);
	return 0;
}