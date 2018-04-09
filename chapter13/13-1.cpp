#include<iostream>
#include<cmath>

using namespace std;

int main() {
	double a, b, c;
	double s, area;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		s = (a + b + c) / 2;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		cout << "该三边所组成三角形的面积为：" << area << endl;
	}
	else {
		cerr << "三边不满足构成三角形的条件！" << endl;
	}
	return 0;
}