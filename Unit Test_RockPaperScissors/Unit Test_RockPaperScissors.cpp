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

			char expected[] = { "Player2" };
			char User1[] = { "Rock" };
			char User2[] = { "Paper" };
			char result[1];
			result[0] = RockPaperScissors(User1, User2);
			
			Assert::AreEqual(expected, RockPaperScissors(User1, User2));
		}

	};
}
