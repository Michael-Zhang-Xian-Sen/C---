#include<iostream>
#include<fstream>

using namespace std;

class employee {
public:
	int num;
	char name[10];
	int age;
	int salary;
};

int save(employee *a, char *b);
int append(employee *a, char *b);
int show(char *b);
int query(char *b, int n);

int main() {
	employee people[5] = { 
		{1,"Michael",21,10000},
		{5,"Coko",22,9000},
		{2,"Honey",33,4242},
		{3,"Fabri",34,15000},
		{4,"Terry",44,30000}
	};
	employee temp;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (people[j].num > people[j + 1].num) {
				temp = people[j];
				people[j] = people[j + 1];
				people[j + 1] = temp;
			}
		}
	}

	save(people, "people.dat");

	employee recruit[2];
	cin >> recruit[0].num >> recruit[0].name >> recruit[0].age >> recruit[0].salary;
	cin >> recruit[1].num >> recruit[1].name >> recruit[1].age >> recruit[1].salary;

	append(recruit, "people.dat");

	show("people.dat");
	
	int n;
	cin >> n;
	while (n != 0) {
		query("people.dat", n);
		cin >> n;
	}

	return 0;
}

int save(employee *a,char *b) {
	ofstream outfile(b);
	for (int i = 0; i < 5; i++) {
		outfile.write((char *)&a[i], sizeof(a[i]));

	}

	outfile.close();
	return 0;
}

int append(employee *a, char *b) {
	ofstream outfile(b,ios::app);
	if (!outfile) {
		cout << "打开文件出错！" << endl;
		exit(0);
	}
	for (int i = 0; i < 2; i++) {
		outfile.write((char *)&a[i], sizeof(a[i]));
	}

	outfile.close();
	return 0;
}

int show(char *b) {
	ifstream infile(b);
	if (!infile) {
		cout << "打开文件出错！" << endl;
		exit(0);
	}
	
	employee people[7];
	for (int i = 0; i < 7; i++) {
		infile.read((char *)&people[i], sizeof(people[i]));
		cout << people[i].num << " " << people[i].name << " " << people[i].age << " " << people[i].salary << endl;
	}
	
	infile.close();
	return 0;
}

int query(char *b, int n) {
	ifstream infile(b);
	if (!infile) {
		cout << "打开文件出错！" << endl;
		exit(0);
	}

	employee people[7];
	employee temp;
	int flag = 0;
	for (int i = 0; i < 7; i++) {
		infile.read((char *)&people[i], sizeof(employee));
		if (n == people[i].num) {
			n = people[i].num;
			temp = people[i];
			flag = 1;
		}

	}
	if (flag == 1) {
		cout << temp.num << " " << temp.name << " " << temp.age << " " << temp.salary << endl;
	}
	else {
		cout << "查无此人" << endl;
	}

	infile.close();
	return 0;
}