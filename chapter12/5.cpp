#include<math.h>
#include<iostream>
using namespace std;

class Shape {
public:
	virtual double area() const = 0;
};

class Circle:public Shape {
public:
	Circle(double r) : radius(r) {};
	virtual double area() const { 
		return 3.14159*radius*radius;
	};
protected:
	double radius;
};

class Square :public Shape {
public:
	Square(double s) :side(s) {};
	virtual double area() const {
		return side * side;
	}
protected:
	double side;
};

class Rectangle :public Shape {
public:
	Rectangle(double w, double h) :width(w), height(h) {};
	virtual double area() const {
		return width*height;
	}
protected:
	double width;
	double height;
};

class Trapezoid :public Shape {
public:
	Trapezoid(double t, double b, double h) :top(t),bottom(b),height(h) {};
	virtual double area() const {
		return (top + bottom)*height / 2;
	}
protected:
	double top;
	double bottom;
	double height;
};

class Triangle :public Shape {
public:
	Triangle(double a, double b, double c) :x(a), y(b), z(c) {};
	virtual double area() const {
		double p = (x + y + z) / 2;
		return (sqrt(p*(p - x)*(p - y)*(p - z)));
	}
protected:
	double x;
	double y;
	double z;
};

int main() {
	Circle circle(1);
	Square square(1);
	Rectangle rectangle(1, 1);
	Trapezoid trapezoid(1, 1, 1);
	Triangle triangle(1, 1, 1);
	Shape *pt[5] = { &circle,&square,&rectangle,&trapezoid,&triangle };
	double areas = 0.0;
	for (int i = 0; i < 5; i++) {
		areas += pt[i]->area();
	}
	cout << "Total of all areas = " << areas << endl;
	return 0;
}