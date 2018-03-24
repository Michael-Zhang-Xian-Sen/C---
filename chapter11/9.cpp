#include<iostream>
#include<string>

using namespace std;

class Teacher {
public:
	Teacher(string nam, int a, char s, string add, string phon, string titl) :name(nam), age(a), sex(s), addr(add), phone(phon), title(titl) {};
	void display() {
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
		cout << "addr : " << addr << endl;
		cout << "sex : " << sex << endl;
		cout << "phone : " << phone << endl;
		cout << "title : " << title << endl;
	}
private:
	string name;
	int age;
	char sex;
	string addr;
	string phone;
	string title;
};

class Cadre {
public:
	Cadre(string nam, int a, char s, string add, string phon, string pos) :name(nam), age(a), sex(s), addr(add), phone(phon), post(pos) {};
	string post;
private:
	string name;
	int age;
	char sex;
	string addr;
	string phone;
};

class Teacher_Cadre :public Teacher, public Cadre {
public:
	Teacher_Cadre(string nam, int a, char s, string add, string phon, string titl,string pos,double wage):Teacher(nam,a,s,add,phon,titl),Cadre(nam, a, s, add, phon, pos){
		wages = wage;
	}
	void show() {
		Teacher::display();
		cout << "post : " << post << endl;
		cout << "wages : " << wages << endl;
	}
private:
	double wages;
};

int main() {
	Teacher_Cadre me("Michael", 21, 'm', "Xi'an", "156****8231", "Someone", "None", 0);
	me.show();
	return 0;

}