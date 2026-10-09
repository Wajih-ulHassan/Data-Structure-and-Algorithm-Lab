#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Your name is: " << name << endl;
	cout << "Length " << name.length() << endl;
    
    int mid = name.length() / 2;
    cout<<"Middle Letter: "<<name[mid];
    return 0;
    }