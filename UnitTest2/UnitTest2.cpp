#include "pch.h"
#include "CppUnitTest.h"
#include "../lab53/lab53.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double result = s(2.0);
			Assert::AreEqual(result, 3.00863, 0.1);
		};
	};
};