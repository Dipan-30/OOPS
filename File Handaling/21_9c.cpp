#include <iostream>
#include <fstream>

using namespace std;

bool startsAndEndsWithA(string word) {
    int n = word.length();
    if ((word[0] == 'a'||word[0] == 'A') && ((word[n-1] == 'a'||word[n-1] == 'A'))) {
        return true;
    }
    return false;
}

int main() {
    // Open the file "a.txt" in read mode
    ifstream inputFile("a.txt");
    if (!inputFile) {
        cout << "Error: Could not open a.txt for reading.\n";
        return 1;
    }

    string word;
    // Read words from the file
    while (inputFile >> word) {
        if (startsAndEndsWithA(word)) {
            cout << word << '\n';
        }
    }

    // Close the file
    inputFile.close();
    return 0;
}
