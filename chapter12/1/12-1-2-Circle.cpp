Circle::Circle(float a, float b, float c) {
	x = a;
	y = b;
	c = radius;
}

void Circle::setRadius(float a) {
	radius = a;
}

float Circle::getRadius() const {
	return radius;
}

float Circle::area() const {
	return 3.14159*radius*radius;
}

ostream &operator <<(ostream &output, const Circle &c) {
	output << "Center = [" << +c.x << "," << c.y << "],r=" << c.radius << ",area=" << c.area() << endl;
	return output;
}