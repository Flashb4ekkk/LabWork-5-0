#include "pch.h"
#include "CppUnitTest.h"
#include "../LabWork-50/LabWork-50.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			//a = 4, b = -6
			int result = f(4, -6);
			int expectedResult = 28;
			Assert::AreEqual(expectedResult, result);
		}
	};
}
