#include <stdexcept>
#include <string>
using namespace std;
class SCheck{
public:
	explicit SCheck(const string& question)
		: question(question) {
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
			throw std::invalid_argument("���� �־����");
		}
		if (isIncludeCapitalLetter(input[0]) || isIncludeCapitalLetter(input[1])) {
			throw std::invalid_argument("�빮�ڷθ� �����Ǿ� ���� ����");
		}
	}

	void guess(vector<string> input)	{
		assertIllegalArgument(input);
	}

private:
	string question;
};


