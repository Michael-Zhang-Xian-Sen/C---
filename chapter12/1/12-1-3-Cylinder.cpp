Cylinder::Cylinder(float a,float b,float c,float d) {
	x = a;
	y = b;
	radius = c;
	height = d;
}

void Cylinder::setHeight(float h) {
	height = h;
}

float Cylinder::getHeight() const {
	return height;
}

float Cylinder::area() const {
	return 2 * Circle::area() + 2 * 3.14159*radius*height;
}

float Cylinder::volume() const {
	return Circle::area()*height;
}

ostream &operator << (ostream &output, Cylinder &cy) {
	output << "Center = [" << cy.getX() << "," << cy.getY() << "]," << "r = " << cy.getRadius() << ",h = " << cy.getHeight()
		<< "\narea = " << cy.area() << ",volume = " << cy.volume() << endl;
	return output;
}
