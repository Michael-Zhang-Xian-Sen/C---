#include<iostream>
using namespace std;

class Point {
public:
	Point(float x = 0, float y = 0);
	void setPoint(float, float);
	float getX() const;
	float getY() const;
	friend ostream & operator << (ostream &, const Point &);
protected:
	float x, y;
};