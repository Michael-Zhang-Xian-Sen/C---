/**

* 项目使用多.cpp文件及.h文件时的注意事项：

* 1.#include<> 尖括号会使编译系统到C++系统所在目录下去找该文件，若找不到则出错。
*   #include"" 双撇号会使编译系统先到用户当前目录下去寻找该文件，若找不到再到C++系统所在目录下去找。

* 2.头文件连续调用。#include"12-1-3.h"中包含了12-1-2.h，而12-1-2.h中包含了12-1-1.h，于是主程序中只需对12-1-3.h进行声明即可。

* 3.工程实践：实际的面向对象程序设计过程中，一般是将类的定义和类的实现（即函数定义）分离的。

*/
#include"12-1-3.h"
#include"12-1-1-Point.cpp"
#include"12-1-2-Circle.cpp"
#include"12-1-3-Cylinder.cpp"

int main() {
	Cylinder cy1(3.5, 6.4, 5.2, 10);
	cout << "original cylinder:\nx=" << cy1.getX() << ",y=" << cy1.getY() << ",r=" << cy1.getRadius()
		<< ",h=" << cy1.getHeight() << "\narea=" << cy1.area() << ",volume=" << cy1.volume() << endl;
	cy1.setHeight(15);
	cy1.setRadius(7.5);
	cy1.setPoint(5,5);
	cout << "\nnew cylinder:\n" << cy1;
	Point &pRef = cy1;
	cout << "\npRef as a point:" << pRef;
	Circle &cRef = cy1;
	cout << "\ncRef as a Circle:" << cRef;
	return 0;
}