#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Define the Student class
class Student {
private:
    int rollNumber;
    string name;
    float cgpa;

public:
    // Member function to input student data
    void input() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore(); // Clear the input buffer
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    // Member function to format student data as a string
    string toString() const {
        return "Roll Number: " + to_string(rollNumber) + ", Name: " + name + ", CGPA: " + to_string(cgpa);
    }
};

int main() {
    // Create an array of 50 Student objects
    const int NUM_STUDENTS = 2;
    Student students[NUM_STUDENTS];

    // Input data for each student
    cout << "Enter details for " << NUM_STUDENTS << " students:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i + 1 << ":\n";
        students[i].input();
        cout << endl;
    }

    // Open a file to write student records
    ofstream outputFile("students.txt");
    if (!outputFile) {
        cout << "Error: Could not open students.txt for writing.\n";
        return 1;
    }

    // Write student records to the file
    for (int i = 0; i < NUM_STUDENTS; i++) {
        outputFile << students[i].toString() << '\n';
    }

    // Close the file
    outputFile.close();
    cout << "Student records have been written to students.txt successfully.\n";

    return 0;
}
