#include <iostream>
#include "class_test.h"
using namespace std;

ClassTest::ClassTest()
{
	x = 0;
	y = 0;
	height = 0;
	width = 0;
}

ClassTest::ClassTest(int x1, int y1, int h, int w)
{
	x=x1;
	y = y1;
	height = h;
	width = w;
}

int ClassTest::getX()
{
	return x;
}
int ClassTest::getY()
{
	return y;
}

int ClassTest::getHeight()
{
	return height;
}

int ClassTest::getWidth()
{
	return width;
}

void ClassTest::setX(int x1)
{
	if (x1 > 0) {
		x = x1;
	}
}

void ClassTest::setY(int y1)
{
	if (y1 > 0) {
		y = y1;
	}
}

void ClassTest::setHeight(int h)
{
	if (h > 0) {
		height = h;
	}
}

void ClassTest::setWidth(int w)
{
	if (w > 0) {
		width = w;
	}
}

void ClassTest::showClassTest()
{
		cout << "=========================\n";
		cout << "x: " << getX() << endl;
		cout << "y: " << getY() << endl;
		cout << "width: " << getWidth() << endl;
		cout << "height: " << getHeight() << endl;
		cout << "=========================\n";
}


