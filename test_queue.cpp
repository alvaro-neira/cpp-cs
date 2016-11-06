//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "hashmap.cpp"
#include "node.cpp"
#include "queue.cpp"

using namespace std;

int main() {
    Queue<string> *queue=new Queue<string>();
    queue->push("A");
    queue->push("B");
    queue->push("C");
    queue->push("D");
    queue->print();
    cout << "wa" << endl;
    queue->pop()->print();
    cout << "wa" << endl;
    queue->pop()->print();
    cout << "wa" << endl;

    queue->print();
    return 0;
}