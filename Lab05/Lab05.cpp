// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include <string>
using namespace std;


char translateCharacter(char c, const vector<char>& cipher) {
    if (c >= 'A' && c <= 'Z') { 
        return cipher[c - 'A'];
    }
    else if (c >= 'a' && c <= 'z') { 
        char upperCaseLetter = c - 32; 
        char upperCaseCode = cipher[upperCaseLetter - 'A']; 
        return upperCaseCode + 32; 
    }
    else { 
        return c;
    }
}

int main() {
    
    vector<char> cipher = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };

  
    string input;
    cout << "Enter a text: ";
    getline(cin, input);

   
    string translatedText;
    for (char c : input) {
        char translatedChar = translateCharacter(c, cipher);
        translatedText += translatedChar;
    }


    cout << "Translated Text: " << translatedText << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
