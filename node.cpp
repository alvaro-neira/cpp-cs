//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "node.h"

using namespace std;

template<class T>
Node<T>::Node() {

}

template<class T>
Node<T>::Node(const T &item, Node<T> *ptrnext) {
    this->data = item;
    this->next = ptrnext;
}

template<class T>
void Node<T>::print() {
    cout << this << ":'" << this->data << "'->" << this->next << endl;
}