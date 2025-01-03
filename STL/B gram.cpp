#include <iostream>
#include <string>
using namespace std;

bool compareConsecutiveChars(string str) {
    int n = str.length();
    
    // Check if string has at least 2 characters
    if (n < 2) {
        return false;
    }
    
    // Compare consecutive characters
    for (int i = 0; i < n-1; i++) {
        if (str[i] == str[i+1]) {
            cout << "Found consecutive matching characters: " << str[i] << str[i+1] << " at position " << i << endl;
            return true;
        }
    }
    
    return false;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    if (compareConsecutiveChars(input)) {
        cout << "String has consecutive matching characters" << endl;
    } else {
        cout << "No consecutive matching characters found" << endl;
    }
    
    return 0;
}
