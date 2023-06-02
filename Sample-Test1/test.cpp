#include "pch.h"
#include "../TDD07_SimilarityChecker/sol.cpp"
using namespace std;

TEST(SimilarityChecker, InvalidCheck) {
SCheck scheck({ "ABC","ABC" });
EXPECT_THROW(scheck.guessLengthScore({ "","ABC" }), invalid_argument);
EXPECT_THROW(scheck.guessLengthScore({ "123BC","ABC" }),invalid_argument);
EXPECT_THROW(scheck.guessLengthScore({ "bca","ABC" }),invalid_argument);
}

TEST(SimilarityChecker, 100CorrectAnswers) {
	SCheck scheck({ "","" });
	EXPECT_EQ(100, scheck.guessLengthScore({ "ABC","ABC" }));
	EXPECT_EQ(100, scheck.guessLengthScore({ "EYMTRXRALICQBOUFSHKN","EYMTRXRALICQBOUFSHKN" }));
}

TEST(SimilarityChecker, lengthCal) {
	SCheck scheck({ "","" });
	//EXPECT_EQ(60, scheck.guessLengthScore({ "ASD","DSA" }));
	//EXPECT_EQ(0, scheck.guessLengthScore({ "A","BB" }));
	EXPECT_EQ(20, scheck.guessLengthScore({ "AAABB","BAA" }));
	EXPECT_EQ(30, scheck.guessLengthScore({ "AA","AAA" }));
}


TEST(SimilarityChecker,alphaCal) {
	SCheck scheck({ "","" });
	EXPECT_EQ(30, scheck.guessAlphaScore({ "AA","AAA" }));
}