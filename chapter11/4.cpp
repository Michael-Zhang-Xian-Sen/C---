/**

* 在什么情况下保护继承方式和公有继承方式不可互相代替？

* 答：需要通过继承类对象，在类外调用基类的公有函数时，若为公有继承，则可以调用；若为保护继承，无法调用，编译出错。

*/
#include<iostream>
#include<string>

using namespace std;

class Student {
public:

protected:
	int num;
	string name;
	char sex;
};

class Student1 :public Student {
public:
	void get_value1();
	void display1();
private:
	int age;
	string addr;
};

void Student1::get_value1() {
	cin >> num >> name >> sex;
	cin >> age >> addr;
}

void Student1::display1() {
	cout << "num : " << num << endl;
	cout << "name : " << name << endl;
	cout << "sex : " << sex << endl;
	cout << "age : " << age << endl;
	cout << "address : " << addr << endl;
}

int main() {
	Student1 stud1;
	stud1.get_value1();
	stud1.display1();
	return 0;
}