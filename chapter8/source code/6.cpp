#include <iostream>
#include "bulk.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Bulk bulk1;
	bulk1.set_value();
	bulk1.cal_bulk();
	bulk1.show_result();
	return 0;
}
