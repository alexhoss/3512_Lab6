#include <iostream>
#include "Dictionary.hpp"
#include "Helpers.hpp"

using namespace std;

int main() {
    bool playing;
    ifstream inFile("../dictionary.txt");
    Dictionary d(inFile);

    cout << "Welcome, please choose from the following options \n\nPrint dictionary: 1\n"
            "Find word: 2\n"
            "Enter dictionary: 3\n"
            "Exit: 4\n" << endl;

    int choice;

    cin >> choice;

    switch (choice) {
        case 1:
            cout << d << endl;
            break;
        case 2:
            Helpers::findWord(d);
        case 3:
            Helpers::newEntry(d);
        case 4:
            exit(1);
        default:
            break;
    }


    return 0;
}