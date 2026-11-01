#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.3/Lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab53Test
{
	TEST_CLASS(Lab53Test)
	{
	public:
		
		TEST_METHOD(TestZFunction)
		{
			double p = 3.7;
			double expectedZ = -2.53545;
			double actualZ = z(p);
			Assert::AreEqual(expectedZ, actualZ, 0.00001);
		}
	};
}
