#include <stdexcept>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class SCheck{
public:
	
	int maxSize = 0;
	int minSize = 0;	
	int sameCnt = 0;
	const int LENGTH_SCORE_MAX = 60;
	explicit SCheck(vector<string> question)
		: question() {		
	}
	
	int findMax(int a, int b) {
		if (a > b) 
			return a;
		else 
			return b;
	}
	int findMin(int a, int b) {
		if (a < b) 
			return a;
		else 
			return b;
	}
	bool isIncludeCapitalLetter(const string& input) {
		for (char ch : input) {
			if (ch >= 'A' && ch <= 'Z') continue;
			return true;
		}
		return false;
	}

	void assertIllegalArgument(vector<string> &input)
	{
		if (input[0] == "" || input[1] == "") {
			throw std::invalid_argument("값을 넣어야함");
		}
		if (isIncludeCapitalLetter(input[0]) || isIncludeCapitalLetter(input[1])) {
			throw std::invalid_argument("대문자로만 구성되어 있지 않음");
		}
	}

	bool exactlysame(vector<string> input)
	{
		sameCnt = 0;
		for(int idx=0; idx < maxSize;idx++)		{
			if(input[0][idx] == input[1][idx])	{
				sameCnt++;
			}
		}
		if (sameCnt == maxSize)	{			
			return true;
		}
		return false;
	}

	bool score100check(vector<string> input, int gapSize)
	{
		if (gapSize == 0) {
			if (exactlysame(input)) {
				return true;
			}
		}
		return false;
	}

	int guess(vector<string> input)	{
		int param1 = input[0].size();
		int param2 = input[1].size();
		assertIllegalArgument(input);
		maxSize = findMax(param1,param2);
		minSize = findMin(param1, param2);
		int gapSize = maxSize - minSize;
		cout << maxSize <<", " << minSize << endl;


		if (score100check(input, gapSize)) return 100;
		if (maxSize == minSize) return LENGTH_SCORE_MAX;
		if (maxSize >= minSize * 2) return 0;
		return LENGTH_SCORE_MAX - (gapSize* LENGTH_SCORE_MAX) / minSize;

		return 0;
	}	

private:
	vector<string> question;
	int score = 0;
};


