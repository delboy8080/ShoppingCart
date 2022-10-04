#include "pch.h"
#include "CppUnitTest.h"
#include "..\ShoppingCart\Book.h"
#include "..\ShoppingCart\ShoppingCart.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ShoppingCartTest
{
	TEST_CLASS(ShoppingCartTest)
	{
	public:
		
		TEST_METHOD(TestAddBook)
		{
			Book* b = new Book("The associate", 9.99);
			ShoppingCart cart;
			Assert::IsTrue(cart.addBook(b));
		}
	};
}
