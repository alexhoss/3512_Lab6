#include <iostream>
#include "Dictionary.hpp"
#include "Helpers.hpp"

using namespace std;

int main() {
    ifstream inFile("../dictionary.txt");
    Dictionary d(inFile);

    Helpers::play(d);

    return 0;
}