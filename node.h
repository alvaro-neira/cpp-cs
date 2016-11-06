//
// Created by Alvaro on 11/6/16.
//

#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template<class T>
class Node {

public:
    Node();

    T data;
    Node<T> *next;

    void print();

    Node(const T &item, Node<T> *ptrnext = NULL);

private:
};

#endif //NODE_H
