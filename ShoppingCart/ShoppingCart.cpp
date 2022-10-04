#include "ShoppingCart.h"

bool ShoppingCart::addBook(Book* b)
{
	if (b != nullptr)
	{
		books.push_back(b);
		return true;
	}
	return false;
}

int ShoppingCart::addAllBooks(list<Book*> b)
{
	int count = 0;

	for (list<Book*>::iterator iter = b.begin(); iter != b.end(); iter++)
	{
		if (*iter != nullptr)
		{
			books.push_back(*iter);
			count++;
		}
	}

	return count;
}
bool ShoppingCart::remove(Book* b)
{
	return false;
}
int ShoppingCart::size()
{
	return books.size();
}