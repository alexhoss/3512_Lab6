//
// Created by Xan on 2019-02-27.
//

#include "Helpers.hpp"


void Helpers::findWord(Dictionary &d) {
    string key;
    cout << "Enter a word to search for: ";
    cin >> key;

    auto itr = d.getDictMap().find(key);

    if (itr == d.getDictMap().end()) {
        cout << "Word not found" << endl;
        return; // RETURN TO MENU
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

        auto itr = d.getDictMap().find(word);
        if (itr == d.getDictMap().end()) {
            cout << "Enter the definition: ";
            cin >> def;
            d.add(word, def);
            doing = false;
            cout << "Add succesful" << endl;
        } else cout << "Word already exists, try again" << endl;


    }

}

void Helpers::play(Dictionary &d) {
    bool playing = true;

    while (playing) {
        cout << "MENU\n============================== \n\nPrint dictionary: 1\n"
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
                break;
            case 3:
                Helpers::newEntry(d);
                break;
            case 4:
                playing = false;
                break;
            default: break;

        }
    }

}
