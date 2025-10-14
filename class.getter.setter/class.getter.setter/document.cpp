#include <iostream>
#include <string>
#include "document.h"
using namespace std;

Document::Document()
{
	char* title = nullptr;
	int pages = 0;
}

Document::Document(char* t, int p)
{
	if (t != nullptr) {
		int size = strlen(t);
		title = new char[size + 1];
		strcpy_s(title, size + 1, t);
	}
	pages = p;
	delete[] title;
}

char* Document::getTitle()
{
	return nullptr;
}

int Document::getPages()
{
	return 0;
}

void* Document::setTitle(char* t)
{
	if (t != nullptr) title = t;
}

void Document::setPages(int p)
{
	if (pages >= 0) pages = p;
}

void Document::showDocument()
{
	cout << "=========================\n";
	cout << "Title: " << getTitle() << endl;
	cout << "Pages: " << getPages() << endl;
	cout << "=========================\n";
}