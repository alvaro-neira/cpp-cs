//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "node.cpp"

using namespace std;

int main() {
    Node<char> *a=new Node<char>('a');
    Node<char> *b=new Node<char>('b',a);
    Node<char> *c=new Node<char>('c',b);
    a->print();
    b->print();
    c->print();
    cout << "Finished OK!" << endl;

    return 0;
}