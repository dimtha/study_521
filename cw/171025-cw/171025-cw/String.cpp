#include <iostream>
#include "String.h"
using namespace std;

MyString::MyString()
{
	str = nullptr;
	size = 0;
}

MyString::MyString(size_t s)
{
	size = s;
}

MyString::MyString(char* str)
{
	if (this->str && *this->str) {
		str = new char[size + 1];
		strcpy_s(str, size + 1, str);
	}
	else {
		str = nullptr;
	}
}

size_t MyString::getSize()
{
	return size_t();
}

char* MyString::getChar()
{
	return str;
}


int MyString::getCount()
{
	return counter;
}

int MyString::counter = 0;
