#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8
{
	TEST_CLASS(UnitTest8)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int  size = 10;
			int i = 0;
			int* a = new int[size];
			rand(size, a, i);
			Sum(a, size, i, i);
			Dob(a, size, i, i, i, i, i, 100, 1);
			sort(a, size, i, i, i);
		}
	};
}
