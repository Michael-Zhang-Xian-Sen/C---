#include<iostream>

using namespace std;

class Student{
	public:
		void show_data();
		void set_data();
	private:
		int num;
		int score;
};

void Student::set_data(){
	cin >> num >> score;
}

void Student::show_data(){
	cout << "Num is : " << num << endl;
	cout << "Score is : " << score << endl;
}

int main(){
	Student stud[5];
	for(int i=0;i<5;i++){
		stud[i].set_data();
	}
	
	Student *stu_p;
	stu_p = stud;
	stu_p[0].show_data();
	stu_p[2].show_data();
	stu_p[4].show_data();
	
	return 0;
}
