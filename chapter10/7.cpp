/**

* 考察内容：考察转换构造函数的使用。

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
		cout << "职位：" << job << endl;
		cout << "编号：" << num << endl;
		cout << "姓名：" << name << endl;
		cout << "性别：" << sex << endl;
	}
private:
	int num;
	char name[13];
	char sex;
	const char job[5] = "学生";
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
		cout << "职位：" << job << endl;
		cout << "编号：" << num << endl;
		cout << "姓名：" << name << endl;
		cout << "性别：" << sex << endl;
	}
private:
	int num;
	char name[13];
	char sex;
	const char job[5] = "老师";
};



int main(){
	Student XiaoWang1(1, "小王", 'm');
	XiaoWang1.show();
	cout << endl << "小王毕业后去当老师啦！" << endl << endl;
	Teacher XiaoWang2(XiaoWang1);
	XiaoWang2.show();
	return 0;
}