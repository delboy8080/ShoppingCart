#pragma once
#include <list>
#include "Book.h"


class ShoppingCart
{
	list<Book*> books;
public:
	bool addBook(Book* b);
};

