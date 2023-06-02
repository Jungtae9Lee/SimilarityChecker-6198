#include "pch.h"
#include "../TDD07_SimilarityChecker/sol.cpp"
using namespace std;

TEST(SimilarityChecker, InvalidCheck) {
SCheck scheck({ "ABC","ABC" });
EXPECT_THROW(scheck.guess({ "","ABC" }), invalid_argument);
EXPECT_THROW(scheck.guess({ "123BC","ABC" }),invalid_argument);
EXPECT_THROW(scheck.guess({ "bca","ABC" }),invalid_argument);
}

TEST(SimilarityChecker, 100CorrectAnswers) {
	SCheck scheck({ "","" });
	EXPECT_EQ(100, scheck.guess({ "ABC","ABC" }));
	EXPECT_EQ(100, scheck.guess({ "EYMTRXRALICQBOUFSHKN","EYMTRXRALICQBOUFSHKN" }));
}

TEST(SimilarityChecker, lengthCal) {
	SCheck scheck({ "","" });
	//EXPECT_EQ(60, scheck.guess({ "ASD","DSA" }));
	//EXPECT_EQ(0, scheck.guess({ "A","BB" }));
	EXPECT_EQ(20, scheck.guess({ "AAABB","BAA" }));
	EXPECT_EQ(30, scheck.guess({ "AA","AAA" }));
}


//TEST(SimilarityChecker,alphaCal) {
//	EXPECT_EQ(1, 1);
//}