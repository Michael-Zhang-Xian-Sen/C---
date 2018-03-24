#include<iostream>
#include<string>
using namespace std;

class Teacher {
public:
	Teacher(int n, string nam, char s) :num(n), name(nam), sex(s){};
	void display() {
		cout << "num : " << num << endl;
		cout << "name : " << name << endl;
		cout << "sex : " << sex << endl;
	}
private:
	int num;
	string name;
	char sex;
};

class BirthDate {
public:
	BirthDate(int y, int m, int d) :year(y), month(m), day(d) {};
	void display() {
		cout << "birthday : " << year << "." << month << "." << day << endl;
	}
	void change(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
private:
	int year;
	int month;
	int day;
};

class Professor :public Teacher {
public:
	Professor(int n, string nam, char s, int y, int m, int d) :Teacher(n, nam, s), birthday(y, m, d) {};
	void show() {
		Teacher::display();
		birthday.display();
	}
	void change(int y, int m,int d){
		birthday.change(y,m,d);
	}
private:
	BirthDate birthday;
};

int main() {
	Professor prof1(1, "Michael", 'M', 1997,02,12);
	cout << endl << "The original data : " << endl;
	prof1.show();
	cout << endl << "The new data : " << endl;
	prof1.change(1997, 5, 9);
	prof1.show();
	return 0;
}