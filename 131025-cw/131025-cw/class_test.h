#pragma once
class ClassTest
{
private:
	int x;
	int y;
	int height;
	int width;
public:

	ClassTest();
	ClassTest(int x1, int y1, int h, int w);

	int getX();
	int getY();
	int getHeight();
	int getWidth();
	void setX(int x1);
	void setY(int y1);
	void setHeight(int h);
	void setWidth(int w);
	void showClassTest();
};