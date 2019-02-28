//
// Created by Xan on 2019-02-27.
//
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iterator>
#include <sstream>

#ifndef INC_3512_LAB6_DICTIONARY_HPP
#define INC_3512_LAB6_DICTIONARY_HPP
using namespace std;

class Dictionary {
private:
    map<string, string> dictMap;
public:
    const map<string, string> &getDictMap() const;

    explicit Dictionary(ifstream &file);

    friend ostream& operator<<(ostream &os, const Dictionary& d);

    void add(string word, string def);


};


#endif //INC_3512_LAB6_DICTIONARY_HPP
