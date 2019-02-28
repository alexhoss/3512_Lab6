//
// Created by Xan on 2019-02-27.
//

#include "Helpers.hpp"

#include <algorithm>

void Helpers::findWord(Dictionary &d) {
    string key;
    cout << "\nEnter a word to search for: ";
    cin >> key;
    cin.ignore(2048, '\n');

    cout << "\nsearing for " << key << endl;

    transform(key.begin(), key.end(), key.begin(), ::tolower);

    auto itr = d.getDictMap().find(key);

    if (itr == d.getDictMap().end()) {
        cout << "\nWord not found\n" << endl;
        return;
    }

    cout << "Word found! " << itr->first << "-" << itr->second << endl;
}

void Helpers::newEntry(Dictionary &d) {
    string word;
    string def;
    bool doing = true;


    while (doing) {
        cout << "Enter a word to add: ";
        cin >> word;
        cin.ignore(2048, '\n');

        transform(word.begin(), word.end(), word.begin(), ::tolower);


        auto itr = d.getDictMap().find(word);
        if (itr == d.getDictMap().end()) {
            cout << "Enter the definition: ";
            getline(cin, def);
            d.add(word, def);
            doing = false;
            cout << "Add successful" << endl;
            writeToFile(word, def);
        } else cout << "Word already exists, try again" << endl;


    }

}

void Helpers::play(Dictionary &d) {
    bool playing = true;
    int choice;

    while (playing) {
        cin.clear();
        cout << "            MENU\n============================== \n\nPrint dictionary: 1\n"
                "Find word: 2\n"
                "Enter dictionary: 3\n"
                "Exit: 4\n" << endl;


        //cin >> choice;

        while(!(cin >> choice)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.  Try again: ";
        }


//        if (cin.fail()) {
//            cout << "Not a digit, try again" << endl;
//            cin.clear();
//            cin.ignore(2048, '\n');
//
//        }

        switch (choice) {
            case 1:
                cout << d << endl;
                break;
            case 2:
                Helpers::findWord(d);
                break;
            case 3:
                Helpers::newEntry(d);
                break;
            case 4:
                playing = false;
                break;
            default:
                cout << "Not an option" << endl;
                break;

        }
    }

}

void Helpers::writeToFile(string word, string def) {
    ofstream file("../Dictionary.txt", ios_base::app);
    if (!(file.is_open())) exit(1);

    file << "\n" << word << "\n" << def;


}
