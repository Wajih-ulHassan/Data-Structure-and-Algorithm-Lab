
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Your name is: " << name << endl;
	cout << "Length " << name.length() << endl;
	cout << "Last letter: " << name[name.length() - 1] << endl;
	cout << "First letter: " << name[0] << endl;
	
	
    cout << "Traversing string:" << endl;
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }
    
    cout << "Reversing string:" << endl;
    for (int i = name.length(); i>=0; i--) {
        cout << name[i] << endl;
    }
    
	return 0;
	
}