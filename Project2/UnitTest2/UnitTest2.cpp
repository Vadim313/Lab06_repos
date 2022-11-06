#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2/Project2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int size = 22;
			int a[22];
			int i = 0;
			rand(size, a, i);
			Sum(size, a, i, i);
			count(size, a, i, i);
			foo(size, a, i);
		}
	};
}
