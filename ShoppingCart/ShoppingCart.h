#pragma once
#include <list>
#include "Book.h"


class ShoppingCart
{
	list<Book*> books;
public:
	bool addBook(Book* b);
	int addAllBooks(list<Book*> b);
	int size();
	bool remove(Book* b);
	double getSubtotal();
	bool checkout();
	bool isEmpty();
};

