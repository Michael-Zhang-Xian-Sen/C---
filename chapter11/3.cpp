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

class Student1 :protected Student {
public:
	void get_value1();
	void display1();
private:
	int age;
	string addr;
};

void Student1::get_value1() {
	// ���Ǳ����̳У���ֱ�ӵ��û����ܱ����ĳ�Ա
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