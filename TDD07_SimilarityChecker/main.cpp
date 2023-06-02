#include "sol.cpp"
#include <iostream>
int main(int argc, char* argv[]){
	SCheck scheck({ "ABC","ABC" });
	//scheck.guessLengthScore({ "ABC","ABC" });
	
	cout << "Run Main" << endl;
	scheck.guessLengthScore({ "AAABB","BAA" });
}
