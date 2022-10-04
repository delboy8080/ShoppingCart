#include "pch.h"
#include "CppUnitTest.h"
#include "..\ShoppingCart\Book.h"
#include "..\ShoppingCart\ShoppingCart.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ShoppingCartTest
{
	TEST_CLASS(ShoppingCartTest)
	{
		Book* b1, *b2, *b3;
	public:
		TEST_METHOD_INITIALIZE(setup)
		{
			b1 = new Book("The associate", 9.99);
			b2 = new Book("The Partner", 19.99);
			b3 = new Book("The Judges List", 19.99);
		}

		TEST_METHOD_CLEANUP(teardown)
		{
			delete b1;
			delete b2;
			delete b3;

		}
		TEST_METHOD(TestAddBook)
		{
			ShoppingCart cart;
			Assert::IsTrue(cart.addBook(b1));	
		}

		TEST_METHOD(TestAddNoBook)
		{
			ShoppingCart c;
			Assert::IsFalse(c.addBook(nullptr));
		}

		TEST_METHOD(testAddAllWithnullptrInList)
		{
			ShoppingCart c;
			list<Book*> books;
			books.push_back(b1);
			books.push_back(b2);
			books.push_back(nullptr);
			Assert::AreEqual(2, c.addAllBooks(books));
			Assert::AreEqual(2, c.size());
		}
		TEST_METHOD(testAddAllWithBooksList)
		{
			ShoppingCart c;
			list<Book*> books;
			books.push_back(b1);
			books.push_back(b2);
			books.push_back(b3);
			Assert::AreEqual(3, c.addAllBooks(books));
			Assert::AreEqual(3, c.size());
		}
		TEST_METHOD(testAddAllWithEmptyList)
		{
			ShoppingCart c;
			list<Book*> books;
			Assert::AreEqual(0, c.addAllBooks(books));
			Assert::AreEqual(0, c.size());

		}

		TEST_METHOD(TestRemoveNull)
		{
			ShoppingCart c;
			c.addBook(b1);
			c.addBook(b2);
			Assert::AreEqual(2, c.size());
			Assert::IsFalse(c.remove(nullptr));
			Assert::AreEqual(2, c.size());
		}
		TEST_METHOD(TestRemoveBook)
		{
			ShoppingCart c;
			c.addBook(b1);
			c.addBook(b2);
			Assert::AreEqual(2, c.size());
			Assert::IsTrue(c.remove(b1));
			Assert::AreEqual(1, c.size());
		}

		TEST_METHOD(TestRemoveBookNotFound)
		{
			ShoppingCart c;
			c.addBook(b1);
			c.addBook(b2);
			Assert::AreEqual(2, c.size());
			Assert::IsFalse(c.remove(b3));
			Assert::AreEqual(2, c.size());
		}
	};
}
