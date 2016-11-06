//
// Created by Alvaro on 11/6/16.
//

#ifndef HASHENTRY_H
#define HASHENTRY_H

template<class T1,class T2>
class HashEntry{
public:
    T1 key;
    T2 value;
    HashEntry<T1,T2>(T1 key,T2 value);
private:
};

#endif
