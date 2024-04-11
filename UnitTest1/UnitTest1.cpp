#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include <string>
#include "../Pr10.1/Pr10.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ofstream testFile("testfile.txt");
			if (testFile.is_open()) {
				testFile << "SQ is here";
				testFile.close();
			}

			Assert::IsTrue(hasAdjacentSQ_QS("testfile.txt"));
		}
	};
}