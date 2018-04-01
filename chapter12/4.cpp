#include<iostream>
#include<math.h>
using namespace std;

class Shape {
public:
	virtual double area() const = 0;
	virtual void printArea() {};
	virtual void shapeName() {};
};

class Circle :public Shape {
public:
	Circle(float a, float b, float r) :x(a), y(b), radius(r) {};
    double area() const {
		return 3.14159*radius*radius;
	};
	void shapeName();
private:
	float x, y;
	float radius;
};

void Circle::shapeName() {
	cout << "Circle: ";
};


class Rectangle:public Shape {
public:
	Rectangle(float a, float b) :x(a), y(b) {};
	void shapeName();
	double area() const{
		return x*y;
	};
private:
	float x, y;
};

void Rectangle::shapeName() {
	cout << "Rectangle: ";
}


class Triangle :public Shape {
public:
	Triangle(float a, float b, float c) :x(a), y(b), z(c) {};
	void shapeName();
	double area() const {
		double p = (x + y + z) / 2;
		return sqrt(p*(p - x)*(p - y)*(p - z));
	};
private:
	float x;
	float y;
	float z;
};

void Triangle::shapeName() {
	cout << "Triangle is : " ;
}

void printArea(const Shape &s) {
	cout << s.area() << endl;
}

int main() {
	Circle a(3, 4,5);
	Rectangle b(3, 4);
	Triangle c(3, 4, 5);

	a.shapeName();
	printArea(a);
	b.shapeName();
	printArea(b);
	c.shapeName();
	printArea(c);

	return 0;
}