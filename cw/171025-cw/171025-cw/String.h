#pragma once
class MyString
{

private:
	size_t size;
	char* str;
	static int counter;
public:
	MyString();
	MyString(char* str);
	MyString(size_t s);
	size_t getSize();
	char* getChar();
	static int getCount();
	void setSize(size_t size);
	void* setChar(char* str);

};


