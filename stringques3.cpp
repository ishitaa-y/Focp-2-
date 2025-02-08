//Write a program that:
// a. Accepts a string from the user.
// b. Checks whether the string is a palindrome (ignoring spaces and case sensitivity).
// c. Counts and displays the frequency of each character in the string
//d. Replace all vowels in the string with a specific character (e.g., *).
#include <iostream>
#include <string>
using namespace std;

bool palindrome_yes (string str) {   // function to check palindrome
string newstr = "";
for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') { {
        newstr += tolower(str[i]);
    }
}
}
int len = newstr.length();
for(int i = 0; i < len/2; i++){
    if (newstr[i] != newstr[len - i - 1]) {
        return false ;
    }
}
 return true;
}
void charfrequency(string str) {
    int freq[256] = {0};      //to store all the ascii values 

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {  
            char ch = tolower(str[i]); 
            freq[ch]++; 
        }
    }

    cout << "Character Frequency:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) { 
            cout << char(i) << " : " << freq[i] << endl;
        }
    }
}
string vowelsreplace(string &str, char replacement) {
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = replacement; 
        }
    }
}
int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (palindrome_yes(input)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is NOT a palindrome.\n";
    }

    charfrequency(input);
    char replacement;
    cout << "Enter a character to replace vowels with: ";
    cin >> replacement;
    string modifiedStr = vowelsreplace (input, replacement);
    cout << "String after replacing vowels: " << modifiedStr << endl;
    return 0;
}
