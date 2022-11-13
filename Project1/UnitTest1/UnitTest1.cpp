#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Project1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = -41;
			int High = 23;
			int rowCount = 7;
			int colCount = 9;
			int S = 0;
			int k = 0;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			Create(a, rowCount, colCount, Low, High);
			Sort(a, rowCount, colCount);
			Print(a, rowCount, colCount);
			Calc(a, rowCount, colCount, S, k);
		}
	};
}
