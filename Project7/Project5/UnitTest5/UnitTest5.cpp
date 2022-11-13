#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int  size = 22;
			int* a = new int[size];
			arr(size, a);
			rand(size, a);
			in(a, size);
		}
	};
}
