/**

* ��Ŀʹ�ö�.cpp�ļ���.h�ļ�ʱ��ע�����

* 1.#include<> �����Ż�ʹ����ϵͳ��C++ϵͳ����Ŀ¼��ȥ�Ҹ��ļ������Ҳ��������
*   #include"" ˫Ʋ�Ż�ʹ����ϵͳ�ȵ��û���ǰĿ¼��ȥѰ�Ҹ��ļ������Ҳ����ٵ�C++ϵͳ����Ŀ¼��ȥ�ҡ�

* 2.ͷ�ļ��������á�#include"12-1-3.h"�а�����12-1-2.h����12-1-2.h�а�����12-1-1.h��������������ֻ���12-1-3.h�����������ɡ�

* 3.����ʵ����ʵ�ʵ�������������ƹ����У�һ���ǽ���Ķ�������ʵ�֣����������壩����ġ�

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