//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "hashentry.cpp"

using namespace std;

int main() {
    string key="hello";
    HashEntry<string> *he=new HashEntry<string>(key, 123);
    cout << "Finished OK!" << endl;

    return 0;
}