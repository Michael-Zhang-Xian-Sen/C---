/**

* ֪ʶ�㣺��new���ٶ�̬�Ĵ洢�ռ䡢������ʱ���󣬿��Դ�������Ҳ���Բ���������

*/
#include<iostream>
using namespace std;

class Point {
public:
	Point(float a,float b):x(a),y(b){}
	~Point() {
		cout << "executing Point destructor" << endl;
	}
private:
	float x;
	float y;
};

class Circle :public Point {
public:
	Circle(float a,float b,float r):Point(a,b),radius(r) {}
	~Circle() {
		cout << "executing Circle destructor" << endl;
	}
private:
	int radius;
};

int main() {
	Point *p = new Circle(2.5,1.8,4.5);
	delete p;
	return 0;
}