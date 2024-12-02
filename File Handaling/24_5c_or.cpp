#include <iostream>
#include <fstream>
using namespace std;

// Function to check if a word contains at most 1 vowel
bool hasAtMostOneVowel(string word) {
    int vowelCount = 0;
    for (int i = 0; i < word.length(); i++) { // Use traditional `for` loop
        char ch = word[i];
        // Check if the character is a vowel (case-insensitive)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }
    if (vowelCount > 1) return false; 
    else return true;
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
        if (hasAtMostOneVowel(word)) {
            outputFile << word << '\n'; // Write the word to b.txt
            count++;
        }
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    // Display the count of words with at most 1 vowel
    cout << "Number of words with atmost one vowel: " << count << '\n';

    return 0;
}
