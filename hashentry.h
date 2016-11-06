//
// Created by Alvaro on 11/6/16.
//

#ifndef HASHENTRY_H
#define HASHENTRY_H

template<class T>
class HashEntry{
public:
    T key;
    int value;
    HashEntry<T>(T key,int value);
private:
};

#endif
