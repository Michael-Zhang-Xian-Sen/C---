/**

* 考察内容：双目运算符以及流插入运算符、流提取运算符的重载。

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
	cout << "本题目所涉及矩阵大小为2*3." << endl << endl;
	cout << "请输入矩阵A的值 ：" << endl;
	cin >> a;
	cout << "请输入矩阵B的值 ：" << endl;
	cin >> b;
	cout << endl << endl;
	cout << "矩阵A为：" << endl << a;
	cout << "矩阵B为：" << endl << b;
	cout << "矩阵A+B为：" << endl << (a+b);
	return 0;
}