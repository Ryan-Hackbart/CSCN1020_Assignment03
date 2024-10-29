#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" char RockPaperScissors(char* inp1, char* inp2);

namespace UnitTestRockPaperScissors
{
	TEST_CLASS(UnitTestRockPaperScissors)
	{
	public:
		
		TEST_METHOD(RPS_Test01)
		{
			// testing the functionality of RockPaperScissors function using "Rock", and "Paper"
			char User1[] = { "Rock" };
			char User2[] = { "Paper" };
			char result[] = { RockPaperScissors(User1, User2)};
			Assert::AreEqual("Player2", result);
		}
	};
}
