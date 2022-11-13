#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7/Source.cpp"'

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7
{
	TEST_CLASS(UnitTest7)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
