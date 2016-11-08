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
*/

#include <iostream>
#include <string>
#include <cmath>

#include "nCombinations.h"

using namespace std;

int leThan26(string str) {
    if (stoi(str) <= 26) {

        return 1;
    }
    return 0;
}

int isValid(string str, int ini, int end) {
    if (end - ini <= 0) {
        cerr << "empty, ini=" << ini << ",end=" << end << endl;
        exit(-1);
    }
    if (end - ini == 1) {
//        cout << "valid:" << str.substr(ini, 1) << endl;
        return 0;
    }
    if (end - ini == 2) {
        if (leThan26(str.substr(ini, 2)) == 1) {
//            cout << "valid:" << str.substr(ini, 2) << endl;
            return 1;
        }
        return 0;
    }
    int middle = ceil(ini+(end - ini) / 2.0);
    int retVal1=0;
    if(middle>ini){
        retVal1+=isValid(str, ini, middle);
    }
    if(middle<end){
        retVal1+=isValid(str, middle, end);
    }
    if(retVal1!=0){
        return 1;
    }

    int retVal2=0;
    if(middle-ini > 1){
        retVal2+=isValid(str, ini, middle - 1);
    }
    if(end-middle > 1){
        retVal2+=isValid(str, middle + 1, end);
    }
    retVal2+=leThan26(str.substr(middle - 1, middle + 1));
    if(retVal2!=0){
        return 1;
    }
    return 0;
}

int nCombinations(char *_str, int ini, int end) {
    string str(_str);
    int v5, v6, v7, v8;
    if (end - ini <= 0) {
        cerr << "ini==end" << endl;
        exit(-1);
    }
    if (end - ini == 1) {
        return 0;
    }
    if (end - ini == 2) {
        return isValid(str, ini, end);
    }
    int middle = ceil(ini+(end - ini) / 2.0);
    int v1 = nCombinations(_str, ini, middle);
    int v2 = isValid(str, middle, end);
    int v3 = nCombinations(_str, middle, end);
    int v4 = isValid(str, ini, middle);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    if (middle-ini>1) {
        middle--;
        v5 = nCombinations(_str, ini, middle);
        v6 = isValid(str, middle, end);
        v7 = nCombinations(_str, middle, end);
        v8 = isValid(str, ini, middle);
    }


    return v1 * v2 + v3 * v4 + v5 * v6 + v7 * v8;

}


int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " NAME" << std::endl;
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++) {

        if (argv[1][i] == '0') {
            cerr << "there is a zero" << endl;
            return -1;
        }
//        for(int j=i;j<strlen(argv[1]);j++) {
//            char subs[j+1-i];
//            int k=0;
//            for(;k<j+1-i;k++) {
//                subs[k]=argv[1][i+k];
//            }
//            subs[k]='\0';
//            cout << subs << endl;
//        }

    }
    cout << "isValid:" << (isValid(argv[1], 0, strlen(argv[1]))) << endl;
    cout << (1 + nCombinations(argv[1], 0, strlen(argv[1]))) << endl;
    return 0;
}

