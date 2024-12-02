#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open the input file "a.txt" for reading
    ifstream inputFile("a.txt");
    if (!inputFile) {
        cout << "Error: Could not open a.txt for reading.\n";
        return 1;
    }

    // Read one character at a time until EOF
    char ch;
    while (inputFile.get(ch)) { // Reads a single character from the file
        cout << ch; // Output the character to the console
    }

    // Close the file
    inputFile.close();

    cout << "\nFile reading completed successfully.\n";
    return 0;
}
