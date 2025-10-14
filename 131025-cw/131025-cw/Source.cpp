#include <iostream>
#include "class_test.h"
using namespace std;

int main() {
	ClassTest ct0;
	ClassTest ct1 { 3,4,23,45 };

	ct1.getX();
	ct1.getY();
	ct1.getHeight();
	ct1.setX(20);

	ct1.showClassTest();
}