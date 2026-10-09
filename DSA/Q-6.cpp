#include <iostream>
#include <string>

using namespae std;

int main(){
	string name;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Your name is: " << name << endl;
	cout << "Length " << name.length() << endl;
	
		
    cout << "Traversing string:" << endl;
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }
}