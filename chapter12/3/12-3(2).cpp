/**

* 知识点：先调用派生类的析构函数，再调用基类的析构函数。

*/
#include<iostream>
using namespace std;

class Point {
public:
	Point(float a, float b) :x(a), y(b) {}
	~Point() {
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
	Circle *pt = new Circle(2.5,1.8,4.5);
	delete pt;
	return 0;
}