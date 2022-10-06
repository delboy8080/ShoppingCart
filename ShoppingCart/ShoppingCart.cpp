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
	for (list<Book*>::reverse_iterator iter = books.rbegin();
		iter != books.rend(); iter++)
	{
		if (*iter == b)
		{
			books.remove(*iter);
			return true;
		}
	}
	return false;
}
int ShoppingCart::size()
{
	return books.size();
}

double ShoppingCart::getSubtotal()
{
	double total=0.00;
	for (list<Book*>::const_iterator iter = books.cbegin(); iter != books.cend(); iter++)
	{
		
		total += (*iter)->getPrice();
	}
	return total;
}

bool ShoppingCart::checkout()
{
	if (books.size() == 0)
		throw logic_error("No books to check out.");
	books.clear();
	return true;
}
