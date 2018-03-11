/*************************************************
Date:2018-3-11
Description:此题有bug！！！题目中没有给出discount！！！
**************************************************/
#include<iostream>

using namespace std;

class Product {
public:
	Product(int m, int q, float p) :num(m), quantity(q), price(p) {};	// 声明并定义带参数的构造函数，使用参数初始化表对数据成员进行初始化。
	void total();														// 声明返回值为空的函数total
	static float average();												// 声明返回值为float的静态成员函数
	static void display();												// 声明返回值为void的静态成员函数
private:
	int num;
	int quantity;
	float price;
	static float discount;												// 声明静态数据成员，其在各个对象的值是一样的，即对于不同对象来说，同一静态数据成员使用同一内存。
	static float sum;
	static int n;
};

void Product::total() {													// 在类外定义成员函数total
	float rate = 1.0;
	if (quantity > 10) {												// 判断是否符合折扣条件
		rate = 0.98 * rate;
	}
	cout << "销售员 " << num << " 共销售 " << quantity << " 件，销售单价 " << price << " 元，合计 " << quantity*price*rate*(1 - discount) << "元" << endl;

	sum = sum + quantity*price*rate*(1 - discount);						// 计算总额
	n = n + quantity;													// 计算销售总量
}

void Product::display() {
	int a;
	cout << sum << endl;
	cout << average() << endl;
}


float Product::average() {
	return(sum / n);
}

float Product::discount = 0.05;
float Product::sum = 0;
int Product::n = 0;

int main() {
	Product Prod[3] = { Product(101,5,23.5),Product(101,12,24.56),Product(103,100,21.5) };
	for (int i = 0; i<3; i++) {
		Prod[i].total();
	};
	Product::display();
	return 0;
}
