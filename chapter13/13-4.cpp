#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

int put_array(int *a, char *b, int n);
int get_array(int *a, char *b, int n);
int append_array(int *a, char *b, int n);

int main() {
	int a[20];
	int b[10];
	for (int i = 0; i < 20; i++) {
		cin >> a[i];
	}

	put_array(a, "f1.dat", 10);
	put_array(a+10, "f2.dat", 10);
	get_array(b, "f1.dat", 10);
	append_array(b, "f2.dat", 10);
	get_array(a, "f2.dat", 20);
	sort(a,&a[20]);
	for (int i = 0; i < 20; i++) {
		cout << "a[i] = " << a[i] << endl;
	}
	put_array(a, "f2.dat", 20);

	return 0;
}

// �������ܣ�������Ϊn������aд����b�������ļ���
int put_array(int *a,char *b,int n) {
	ofstream outfile(b);
	if (!outfile) {
		cerr << "open f2.dat error!" << endl;
		exit(1);
	}
	for (int i = 0; i < n; i++) {
		outfile << a[i] << " ";
	}
	outfile.close();

	return 0;
}

// �������ܣ���b�ļ��ж�ȡn����������������a�С�
int get_array(int *a, char *b, int n) {
	ifstream infile(b);
	if (!infile) {
		cerr << "open f2.dat error!" << endl;
		exit(1);
	}
	int temp;
	char ch;
	for (int i = 0; i < n; i++) {
		temp = 0;
		while (infile.get(ch)) {
			if (ch != 32) {
				temp = temp * 10 + int(ch)-48;
			}
			else {
				break;
			}
		}
		a[i] = temp;
	}
	infile.close();
	return 0;
}


// �������ܣ���b�ļ�ĩβ׷��n����a�����ж�ȡ��������
int append_array(int *a, char *b, int n) {
	ofstream outfile(b, ios::app);

	for (int i = 0; i < n; i++) {
		outfile << a[i] << " ";
	}
	outfile.close();
	return 0;
}