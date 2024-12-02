#include <iostream>
#include <fstream>
using namespace std;

// Function to check if a word is a palindrome using a for loop
bool isPalindrome(string word) {
    int length = word.length();

    // Use a for loop to compare characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            return false; // Not a palindrome if characters don't match
        }
    }
    return true; // It's a palindrome
}

int main() {
    // Open the input file "a.txt" in read mode
    ifstream inputFile("a.txt");
    if (!inputFile) {
        cout << "Error: Could not open a.txt for reading.\n";
        return 1;
    }

    // Open the output file "b.txt" in write mode
    ofstream outputFile("b.txt");
    if (!outputFile) {
        cout << "Error: Could not open b.txt for writing.\n";
        return 1;
    }

    string word;
    int count = 0;

    // Read words from the input file
    while (inputFile >> word) {
        // Check if the word is a palindrome
        if (isPalindrome(word)) {
            outputFile << word << '\n';  // Write the palindrome word to b.txt
            count++;  // Count the palindrome word
        }
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    // Display the count of palindrome words
    cout << "Number of palindrome words: " << count << '\n';

    return 0;
}
