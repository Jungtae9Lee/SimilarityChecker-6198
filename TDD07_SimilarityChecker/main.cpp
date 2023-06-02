#include "sol.cpp"
#include <iostream>
int main(int argc, char* argv[]){
	SCheck scheck({ "ABC","ABC" });
	//scheck.guess({ "ABC","ABC" });
	
	cout << "Run Main" << endl;
	scheck.guess({ "AAABB","BAA" });
}
