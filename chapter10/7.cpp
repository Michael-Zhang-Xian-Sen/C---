/**

* �������ݣ�����ת�����캯����ʹ�á�

*/

#include<iostream>
using namespace std;

class Teacher;

class Student {
public:
	friend Teacher;
	Student() {
		num = 0;
		strcpy(name, "null");
		sex = 'm';
	}
	Student(int n, char *na, char s) :num(n), sex(s) {
		strcpy(name, na);
	}
	void show() {
		cout << "ְλ��" << job << endl;
		cout << "��ţ�" << num << endl;
		cout << "������" << name << endl;
		cout << "�Ա�" << sex << endl;
	}
private:
	int num;
	char name[13];
	char sex;
	const char job[5] = "ѧ��";
};

class Teacher {
public:
	Teacher() {
		num = 0;
		strcpy(name,"null");
		sex = 'm';
	}
	Teacher(int n,char *na,char s):num(n),sex(sex){
		strcpy(name,na);
	}
	Teacher(Student &a) {
		num = a.num;
		strcpy(name, a.name);
		sex = a.sex;
	};
	void show() {
		cout << "ְλ��" << job << endl;
		cout << "��ţ�" << num << endl;
		cout << "������" << name << endl;
		cout << "�Ա�" << sex << endl;
	}
private:
	int num;
	char name[13];
	char sex;
	const char job[5] = "��ʦ";
};



int main(){
	Student XiaoWang1(1, "С��", 'm');
	XiaoWang1.show();
	cout << endl << "С����ҵ��ȥ����ʦ����" << endl << endl;
	Teacher XiaoWang2(XiaoWang1);
	XiaoWang2.show();
	return 0;
}