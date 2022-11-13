#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int  size = 10;
			int* a = new int[size];
			rand(size, a);
			sum(a, size);
			Dob(a, size);
			sort(a, size);
		}
	};
}
