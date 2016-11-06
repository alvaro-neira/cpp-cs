//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "hashentry.cpp"

using namespace std;

int main() {
    string key="hello";
    HashEntry<string,int> *he=new HashEntry<string,int>(key, 123);
    cout << he << endl;
    cout << "Finished OK!" << endl;

    return 0;
}