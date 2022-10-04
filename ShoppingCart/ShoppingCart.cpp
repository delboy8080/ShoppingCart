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