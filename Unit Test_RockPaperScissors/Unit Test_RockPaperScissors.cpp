#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" char* RockPaperScissors(char* inp1, char* inp2);

namespace UnitTestRockPaperScissors
{
	TEST_CLASS(UnitTestRockPaperScissors)
	{
	public:
		
		TEST_METHOD(RPS_Test01)
		{
			// testing the functionality of RockPaperScissors function using "Rock", and "Paper"

			char expected[] = "Player2";
			char User1[] = "Rock";
			char User2[] = "Paper";
			char* result = RockPaperScissors(User1, User2); 
			
			
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(RPS_Test02)
		{
			// testing the functionality of RockPaperScissors function using "Rock", and "Paper"

			char expected[] = "Player1";
			char User1[] = "Rock";
			char User2[] = "Scissors";
			char* result = RockPaperScissors(User1, User2);


			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(RPS_Test03)
		{
			// testing the functionality of RockPaperScissors function using "Rock", and "Paper"

			char expected[] = "Draw";
			char User1[] = "Paper";
			char User2[] = "Paper";
			char* result = RockPaperScissors(User1, User2);


			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(RPS_Test04)
		{
			// testing the functionality of RockPaperScissors function using "Rock", and "Paper"

			char expected[] = "Invalid";
			char User1[] = "rock";
			char User2[] = "Paper";
			char* result = RockPaperScissors(User1, User2);


			Assert::AreEqual(expected, result);
		}

	};
}
