#pragma once
#include <iostream>

using namespace std;
class Book
{
	string title;
	double price;
public:
	Book(string title, double price);
	string getTitle();
	double getPrice() const;
	void setTitle(string title);
	void setPrice(double price);
	~Book();

};

