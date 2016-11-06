//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "hashentry.h"

using namespace std;
template<class T1,class T2>
HashEntry<T1,T2>::HashEntry(T1 key,T2 value){
    this->key=key;
    this->value=value;
}