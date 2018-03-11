#include<iostream>

using namespace std;

class Date;

class Time {
public:
	Time(int, int, int);
	friend void display(Date &,Time &);
private:
	int hour;
	int minute;
	int sec;
};

class Date {
public:
	Date(int, int, int);
	friend void display(Date &,Time &);
private:
	int month;
	int day;
	int year;
};

Time::Time(int h, int m, int s) {
	hour = h;
	minute = m;
	sec = s;
}

Date::Date(int m, int d, int y) {
	month = m;
	day = d;
	year = y;
}

void display(Date &d, Time &t) {
	cout << d.month << "/" << d.day << "/" << d.year << endl;
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}

int main() {
	Time time(0, 2, 30);
	Date date(3, 12, 2018);
	display(date, time);
	return 0;
}