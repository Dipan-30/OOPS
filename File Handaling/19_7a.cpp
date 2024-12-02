#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream File("a.txt");
    if(!File){
        cout<<"error while opening the file"<<endl;
    }
    string line;
    cout << "Enter lines to write to the file (enter -1 to stop):\n";

    // Continue writing lines until the user enters -1
    while (getline(cin, line)) {
        if (line == "-1") {
            break; // Exit the loop if the user enters -1
        }
        File << line << '\n'; // Write the line to the file
    }
    File.close();
}