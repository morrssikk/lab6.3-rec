#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3 rec/lab6.3 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestiter
{
	TEST_CLASS(UnitTestiter)
	{


		TEST_METHOD(TestMethod1)
		{

			const int n = 12;
			int a[n] = { -57, -31, -48, 33, -58, -20, -58, -20, -58, 47, 55, 27 };

			int count = 0;

			int expectedCount = 4;

			Calculate(a, n, count, 0);

			Assert::AreEqual(expectedCount, count);
		}
	};
}