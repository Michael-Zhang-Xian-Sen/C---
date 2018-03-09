#include <iostream>
#include "bulk.h"

using namespace std;

void Bulk::set_value(){
	cin >> length >> width >> height;
}

void Bulk::cal_bulk(){
	bulk = length * width * height;
}

void Bulk::show_result(){
	cout << "Length is : " << length << endl;
	cout << "Width is : " << width << endl;
	cout << "Height is : " << height << endl << endl;
	cout << "The bulk of the cuboid is : " << bulk << endl;
}
