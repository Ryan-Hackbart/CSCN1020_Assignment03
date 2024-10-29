#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestRockPaperScissors
{
	TEST_CLASS(UnitTestRockPaperScissors)
	{
	public:
		
		TEST_METHOD(RockPaperScissors)
		{
			// testing the functionality of RockPaperScissors function using "Rock", and "Paper"
			char* User1[] = { "Rock" };
			char* User2[] = { "Paper" };
			char* result[] = RockPaperScissors();
			Assert::AreEqual("Player2", result);
		}
	};
}
