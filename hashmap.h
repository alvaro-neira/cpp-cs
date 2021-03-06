//
// Created by Alvaro on 11/6/16.
// TODO: COLISIONS!!!
//

#ifndef HASHMAP_H
#define HASHMAP_H
#include "hashentry.cpp"
#define TABLE_SIZE 1048576
//template<class T>
class HashMap{
public:
    HashMap();
    HashEntry<string,int> **buckets;
    /**
     * TODO: returns -1 if not found. This is not reliable
     * @param key
     * @return
     */
    int get(string key);
    void put(string key, int value);
    ~HashMap();
private:
    unsigned long int hashFunction(string key, int key_len);
};
#endif
