#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int getInteger(const string& prompt = "Enter an integer: ", const string& reprompt = "Illegal numeric format. Try again.");

int main() {
    // string str;
    // getline(cin, str, '\n');

    int myInt = getInteger();
    cout << "Integer readed successfully..." << endl;
    cout << "User entered: " << myInt << endl;
    return 0;
}

int getInteger(const string& prompt, const string& reprompt) {
    while(true) {
	cout << prompt;
	string line;
	if (!getline(cin, line)) {
	    throw domain_error("getLine: End of input reached while waiting for line.");
	}
	    istringstream iss(line);
	    int value; char garbage;
	    if (iss >> value && !(iss >> garbage)) return value;
	    cerr << reprompt << endl;
    }
}
