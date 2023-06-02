#include "pch.h"
#include "../TDD07_SimilarityChecker/sol.cpp"
using namespace std;



TEST(SimilarityChecker, InvalidCheck) {
SCheck scheck("ABC");
vector<string> input = { "ABC","ABC" };
EXPECT_THROW(scheck.guess({ "","ABC" }), invalid_argument);
EXPECT_THROW(scheck.guess({ "123BC","ABC" }),invalid_argument);
EXPECT_THROW(scheck.guess({ "bca","ABC" }),invalid_argument);
//EXPECT_THROW(scheck.guess("121"), invalid_argument);
}

TEST(SimilarityChecker, lengthCal) {
	EXPECT_EQ(1, 1);
}

//TEST(SimilarityChecker,alphaCal) {
//	EXPECT_EQ(1, 1);
//}