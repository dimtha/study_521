#pragma once
class Document
{
private:
	char* title;
	int pages;
public:
	Document();
	Document(char* t, int p);

	char* getTitle();
	int getPages();
	void* setTitle(char* t);
	void setPages(int p);
	void showDocument();
};

