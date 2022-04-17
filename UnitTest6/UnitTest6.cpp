#include "pch.h"
#include "CppUnitTest.h"
#include "../2.2/Integer.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Integer x1(2);
			Integer x2(3);
			Integer r(5);
			Integer s(x1 + x2);
			Assert::AreEqual(s.GetX(), 5);
		}
	};
}
