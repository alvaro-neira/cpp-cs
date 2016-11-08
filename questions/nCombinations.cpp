/**
 *
Created by Alvaro on 11/7/16.

* a encoded to 1
* b encoded to 2
* ....
* z encoded to 26
*
* '123' can be translated to 'abc','aw','lc' -> 3
* '12' -> 'ab','l' -> 2
*
* Write a function to get the number of valid combinations from a number like '123123123'
 *
 *
 *  7 Nov 2016:
 *  Brute force is not easy to implement. Better go with the intelligent answer
 *
 *  8 Nov 2016:
 *  Solution: the function _nCombinations() is defined:
 *  * Recursive
 *  * Not divide-and-conquer
 *  * It returns the number of combinations DISTINCT than the trivial one (ex. 9999->"aaaa" 1 trivial combination)
 *  * Not extensively tested yet
*/

#include <iostream>

#include "nCombinations.h"

using namespace std;

int isValid(string str, int ini, int end) {
    if (end - ini != 2) {
        cerr << "not 2, ini=" << ini << ",end=" << end << endl;
        exit(-1);
    }
    int res = stoi(str.substr(ini, 2));
    return res <= 26;
}

int _nCombinations(char *_str, int ini, int end) {
    if (end - ini < 1) {
        cerr << "not 1, ini=" << ini << ",end=" << end << endl;
        exit(-1);
    }
    if (end - ini == 1) {
        return 0;
    }
    if (end - ini == 2) {
        return isValid(_str, ini, end);
    }
    return isValid(_str, ini, ini + 2) + _nCombinations(_str, ini + 1, end);

}

int nCombinations(char *str) {
    return 1 + _nCombinations(str, 0, strlen(str));
}


int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <string>" << std::endl;
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++) {

        if (argv[1][i] == '0') {
            cerr << "there is a zero" << endl;
            exit(-1);
        }
    }
    cout << "number of combinations = " << nCombinations(argv[1]) << endl;
    return 0;
}

