#include <iostream>
#include "String.h"
using namespace std;

int main() {

	char word[30] = "Hello, World!";
	MyString my_str(word);
	MyString my_str1(word);
	cout << my_str.getStr()<<endl;

	my_str1.myStrcpy(my_str);

	cout << my_str1.myCharIndex('r') << endl;

	my_str1.myDeleteChar('W');
	cout << my_str1.getStr() << endl;

	my_str1.myDeleteChar('v');
	cout << my_str1.getStr() << endl;



	//my_str.~MyString();

	return 0;
}