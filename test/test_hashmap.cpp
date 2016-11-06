//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "../hashmap.cpp"

using namespace std;

int main() {
    HashMap *hashMap=new HashMap();
    cout << hashMap->table << endl;
    hashMap->put("hola",123);
    hashMap->put("si",1);
    hashMap->put("no",-123);
    hashMap->put("a",1234);
    cout << hashMap->get("a") << endl;
    cout << hashMap->get("si") << endl;
    cout << hashMap->get("no") << endl;
    cout << hashMap->get("a") << endl;
    cout << hashMap->get("nonexistant") << endl;
    cout << "Finished OK!" << endl;

    return 0;
}