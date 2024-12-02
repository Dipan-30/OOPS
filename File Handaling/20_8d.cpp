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

    // Open the output file "b.txt" for writing
    ofstream outputFile("b.txt");
    if (!outputFile) {
        cout << "Error: Could not open b.txt for writing.\n";
        return 1;
    }

    // Copy the contents of a.txt to b.txt
    string line;
    while (getline(inputFile, line)) {
        outputFile << line << '\n';
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "Contents of a.txt copied to b.txt successfully.\n";
    return 0;
}
