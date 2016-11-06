//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "hashentry.h"

using namespace std;
template<class T>
HashEntry<T>::HashEntry(T * key,int value){
    this->key=key;
    this->value=value;
}