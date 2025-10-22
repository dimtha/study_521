#include <iostream>
#include "String.h"
using namespace std;

static char* copyStr(const char* newStr) {
	size_t size = strlen(newStr);
	char* str = new char[size + 1];
	strcpy_s(str, size + 1, newStr);
	return str;
}

MyString::MyString()
{
	str = nullptr;
	size = 0;
}

MyString::MyString(size_t s)
{
	size = s;
}

MyString::MyString(const char* str)
{
	if (this->str != nullptr) {
		size_t size = strlen(str);
		char* str = new char[size + 1];
		strcpy_s(this->str, size + 1, str);
	}
}

size_t MyString::getSize()
{
	return size;
}

char* MyString::getChar() 
{
	return this->str;
}

//int MyString::getCount()
//{
//	return counter;
//}

void MyString::setSize(size_t size)
{
	if(strlen(str) != 0) size = strlen(str);
}

void* MyString::setChar(char* str1)
{
	if (str != nullptr) {
		size_t size = strlen(str);
		char* str = new char[size + 1];
		strcpy_s(this->str, size + 1, str1);
	}
	return this->str;
}

void MyString::myStrcpy(MyString& obj)
{
	size_t size = strlen(this->str);
	char* buf = new char[size + 1];
	strcpy_s(obj.getChar(), size + 1, this->str);
}


int MyString::counter = 0;