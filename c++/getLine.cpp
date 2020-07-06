#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string name;
    int age;
    string response;
    getline(cin, name, '\n');
    cin >> age;
    cout << name << age;
    cin.ignore(); // ignore one character in buffer i.e. '\n'
    getline(cin, response, '\n');
    cout << response << endl;
    return 0;
}

