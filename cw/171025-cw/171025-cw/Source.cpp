#include <iostream>
#include "String.h"
using namespace std;

int main() {

	MyString my_str();

	//cout << my_str.getChar();
	
	//MyString my_str1();

	//my_str.myStrcpy(my_str1)

	char word[20] = "rever";
	my_str().setChar(word);
	cout << my_str().getChar();


	return 0;
}