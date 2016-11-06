//
// Created by Alvaro on 11/6/16.
//

#ifndef HASHMAP_H
#define HASHMAP_H
#include "hashentry.cpp"
#define TABLE_SIZE 128
//template<class T>
class HashMap{
public:
    HashMap();
    HashEntry<string,int> **table;

    int get(string key);
    void put(string key, int value);
    ~HashMap();
private:
    unsigned long int hashFunction(string key, int key_len);
};
#endif
