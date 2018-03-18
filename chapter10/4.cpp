/**

* 考察内容：运算符重载。

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


int main() {
	double arr_a[2][3] = { {1,2,3},{4,5,6} };
	double arr_b[2][3] = { {6,5,4},{3,2,1} };
	Matrix a(arr_a);
	Matrix b(arr_b);
	cout << "矩阵A为：" << endl;
	a.show();
	cout << "矩阵B为：" << endl;
	b.show();
	cout << "矩阵A+B为：" << endl;
	(a + b).show();
	return 0;
}