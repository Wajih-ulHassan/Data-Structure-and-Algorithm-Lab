#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Your name is: " << name << endl;
	cout << "Length " << name.length() << endl;
    
    cout << "Reversing string:" << endl;
    for (int i = name.length(); i>=0; i--) {
        cout << name[i] << endl;
    }
    return 0;
}