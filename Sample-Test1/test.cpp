#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <fstream>
#include <vector>	
#include "../practice1_oppo/practice1_oppo.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MySolution
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(ValidTime)
		{
			vector<string> Cases
			{
				"10:10",
				"12:10",
				"23:59",
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = check_time(Cases[i]);
				Assert::IsTrue(result);
			}
		}

		TEST_METHOD(InvalidTime)
		{
			vector<string> Cases
			{
				"101:10",
				"12.10",
				"23:591",
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = check_time(Cases[i]);
				Assert::IsTrue(result);
			}
		}
		TEST_METHOD(ValidTime)
		{
			vector<string> Cases
			{
				"10:10",
				"12:10",
				"23:59",
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = check_time(Cases[i]);
				Assert::IsTrue(result);
			}
		}

		TEST_METHOD(InvalidTime)
		{
			vector<string> Cases
			{
				"101:10",
				"12.10",
				"23:591",
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = check_time(Cases[i]);
				Assert::IsTrue(result);
			}
		}
		TEST_METHOD(ValidNumber)
		{
			vector<int> Cases
			{
				100,
				200,
				300,
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = check_number(Cases[i]);
				Assert::IsTrue(result);
			}
		}

		TEST_METHOD(InvalidNumber)
		{
			vector<string> Cases
			{
				"-100",
				-100,
				0,
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = check_number(Cases[i]);
				Assert::IsTrue(result);
			}
		}
		TEST_METHOD(ValidString)
		{
			vector<string> Cases
			{
				"Pepper",
				"Salt",
				"Happy New Year",
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = check_string(Cases[i]);
				Assert::IsTrue(result);
			}
		}

		TEST_METHOD(InvalidString)
		{
			vector<string> Cases
			{
				"1",
				"",
				"h0h0h0",
			};
			for (int i = 0; i < Cases.size(); i++)
			{
				bool result = check_time(Cases[i]);
				Assert::IsTrue(result);
			}
		}
	};

}