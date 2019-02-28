//
// Created by Xan on 2019-02-27.
//
#include <string>
#include <iostream>
#include <fstream>
#include "Dictionary.hpp"
using namespace std;

#ifndef INC_3512_LAB6_HELPERS_HPP
#define INC_3512_LAB6_HELPERS_HPP


class Helpers {
public:

    static void findWord (Dictionary &d);
    static void newEntry(Dictionary &d);
    static void play(Dictionary &d);
    static void writeToFile(string word, string def);


};


#endif //INC_3512_LAB6_HELPERS_HPP
