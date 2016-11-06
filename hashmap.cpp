//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include <string>
#include "hashmap.h"

using namespace std;
//template<class T>
HashMap::HashMap() {
    table = new HashEntry<string,int>*[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
        table[i] = NULL;
}

int HashMap::get(string key) {
    int hash = hashFunction(key,1);
    while (table[hash] != NULL && table[hash]->key != key)
        hash = (hash + 1) % TABLE_SIZE;
    if (table[hash] == NULL)
        return -1;
    else
        return table[hash]->value;
}

void HashMap::put(string key, int value) {
    unsigned long int hash = hashFunction(key,1);
    while (table[hash] != NULL && key.compare(table[hash]->key)!=0)
        hash = (hash + 1) % TABLE_SIZE;
    if (table[hash] != NULL)
        delete table[hash];
    table[hash] = new HashEntry<string,int>(key, value);
}

HashMap::~HashMap() {
    for (int i = 0; i < TABLE_SIZE; i++)
        if (table[i] != NULL)
            delete table[i];
    delete[] table;
}

/**
 *
 * "Jenkins One-at-a-time hash"
 * Adapted for this
 * @param key
 * @param key_len
 * @return
 */
unsigned long int HashMap::hashFunction(string _key, int key_len) {
    const char* key=_key.c_str();
    unsigned int hash = 0;
    int i;

    for (i = 0; i < key_len; i++) {
        hash += key[i];
        hash += (hash << 10);
        hash ^= (hash >> 6);
    }
    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);
    return hash % TABLE_SIZE;
}