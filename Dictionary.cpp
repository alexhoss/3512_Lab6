//
// Created by Xan on 2019-02-27.
//

#include "Dictionary.hpp"

using namespace std;

Dictionary::Dictionary(ifstream &file) {

    string word;
    string def;
    if (!(file.is_open())) exit(1);

    while (getline(file, word)) {
        getline(file,def);
        dictMap.insert(make_pair(word, def));
    }
    file.close();

}

ostream &operator<<(ostream &os, const Dictionary &d) {

    for (auto &it : d.dictMap) {
        os << it.first << " - "<< it.second << endl;
    }
    return os;

}

const map<string, string> &Dictionary::getDictMap() const {
    return dictMap;
}

void Dictionary::add(string word, string def) {
    dictMap.insert(make_pair(word, def));

}
