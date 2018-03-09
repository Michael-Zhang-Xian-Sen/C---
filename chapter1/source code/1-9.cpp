#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b;
	
	int add(int x,int y);
	c = add(a,b);
	cout << "a + b = " << c << endl;
	
	return 0;
}

int add(int x,int y){
	int z;
	z = x + y;
	return(z);
}
