#include<iostream>

using namespace std;

class Student{
	public:
		void show_data();
		void set_data();
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

int max(Student *stu_p){
	int max_score = 0;
	int max_num = 0;
	for(int i=0;i<5;i++){
		if(stu_p[i].score>max_score){
			max_score = stu_p[i].score;
			max_num = i;
		}
	}
	stu_p[max_num].show_data();
	return 0;
}

int main(){
	Student stud[5];
	for(int i=0;i<5;i++){
		stud[i].set_data();
	}
	
	Student *stu_p;
	stu_p = stud;
	max(stu_p);
	
	return 0;
}
