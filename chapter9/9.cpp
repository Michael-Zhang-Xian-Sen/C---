/*************************************************
Date:2018-3-11
Description:������bug��������Ŀ��û�и���discount������
**************************************************/
#include<iostream>

using namespace std;

class Product {
public:
	Product(int m, int q, float p) :num(m), quantity(q), price(p) {};	// ����������������Ĺ��캯����ʹ�ò�����ʼ��������ݳ�Ա���г�ʼ����
	void total();														// ��������ֵΪ�յĺ���total
	static float average();												// ��������ֵΪfloat�ľ�̬��Ա����
	static void display();												// ��������ֵΪvoid�ľ�̬��Ա����
private:
	int num;
	int quantity;
	float price;
	static float discount;												// ������̬���ݳ�Ա�����ڸ��������ֵ��һ���ģ������ڲ�ͬ������˵��ͬһ��̬���ݳ�Աʹ��ͬһ�ڴ档
	static float sum;
	static int n;
};

void Product::total() {													// �����ⶨ���Ա����total
	float rate = 1.0;
	if (quantity > 10) {												// �ж��Ƿ�����ۿ�����
		rate = 0.98 * rate;
	}
	cout << "����Ա " << num << " ������ " << quantity << " �������۵��� " << price << " Ԫ���ϼ� " << quantity*price*rate*(1 - discount) << "Ԫ" << endl;

	sum = sum + quantity*price*rate*(1 - discount);						// �����ܶ�
	n = n + quantity;													// ������������
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
