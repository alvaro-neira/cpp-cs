//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "hashentry.cpp"

using namespace std;

int main() {
    char * key=new char[6];
    key[0]='h';
    key[1]='\0';
    HashEntry<char> *he=new HashEntry<char>(key, 123);
    cout << "Finished OK!" << endl;

    return 0;
}