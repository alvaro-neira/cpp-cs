//
// Created by Alvaro on 11/6/16.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "node.h"

using namespace std;

template<class T>
class Queue{

public:
    Queue();
    void push(const T &item);
    Node<T> *pop();
    void print();
private:
    Node<T> *first;
    Node<T> *last;
    int size;
};
#endif //QUEUE_H
