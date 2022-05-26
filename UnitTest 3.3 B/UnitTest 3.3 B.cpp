#include "pch.h"
#include "CppUnitTest.h"
#include "../Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(2, 3), b(2, 3);
			Assert::AreEqual(operator==(a, b), true);
		}
	};
}
