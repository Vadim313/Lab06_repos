#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3/Project3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int size = 22;
			int* a = new int[size];
			arr(size, a);
			rand(size, a);
			in(a, size);
		}
	};
}
