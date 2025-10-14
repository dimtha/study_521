#include <iostream>
#include "document.h"
using namespace std;

int main() {
	Document doc0;
	Document doc1;

	char test = 'h';
	//doc0.getPages();
	//doc0.getTitle();
	doc1.setPages(test);

	//doc0.showDocument();
	doc1.showDocument();
	return 0;
}