#include "Book.h"

Book::Book(string title, double price)
{
	this->title = title;
	this->price = price;
}
string Book::getTitle()
{
	return title;
}
double Book::getPrice()
{
	return price;
}
void Book::setTitle(string title)
{
	this->title = title;
}
void Book::setPrice(double price)
{
	this->price = price;
}
Book::~Book()
{

}