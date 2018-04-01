/**

* 知识点：当基类的析构函数为虚函数时，①由该基类所派生的所有派生类的析构函数也都自动成为虚函数，②无论指针指的时同一类族中哪一个类对象，系统都会采用动态关联，
*         调用相应类的析构函数，对该对象进行清理工作。

*/
#include<iostream>
using namespace std;

class Point {
public:
	Point(float a, float b) :x(a), y(b) {}
	virtual ~Point() {
		cout << "executing Point destructor" << endl;
	}
private:
	float x;
	float y;
};

class Circle :public Point {
public:
	Circle(float a, float b, float r) :Point(a, b), radius(r) {}
	~Circle() {
		cout << "executing Circle destructor" << endl;
	}
private:
	int radius;
};

int main() {
	Point *p = new Circle(2.5, 1.8, 4.5);
	delete p;
	return 0;
}