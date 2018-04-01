Point::Point(float a, float b) {
	x = a;
	y = b;
};

void Point::setPoint(float a, float b) {
	x = a;
	y = b;
}

float Point::getX() const {
	return x;
}

float Point::getY() const {
	return y;
}

ostream & operator << (ostream &output, const Point &p) {
	output << "[" << p.x << "," << p.y << "]" << endl;
	return output;
}