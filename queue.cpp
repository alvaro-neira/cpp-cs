//
// Created by Alvaro on 11/6/16.
//

#include <iostream>
#include "queue.h"

using namespace std;

template<class T>
Queue<T>::Queue() {
    size=0;
}

template<class T>
void Queue<T>::print() {
    Node<T> *aux=this->first;
    while(aux!=NULL){
        aux->print();
        aux=aux->next;
    }
}

template<class T>
void Queue<T>::push(const T &item){
    if(size==0){
        this->first=new Node<T>(item);
        this->last=this->first;
    }else{
        Node<T> *aux=this->first;
        while(aux->next!=NULL){
            aux=aux->next;
        }
        aux->next=new Node<T>(item);
    }
    size++;
}

template<class T>
Node<T> * Queue<T>::pop(){
    if(size<=0){
        return NULL;
    }else{
        size--;
        Node<T> *retVal=this->first;
        this->first=this->first->next;
        return retVal;
    }
}

/**
 * This is for stack
 * @param item
 */
//template<class T>
//void Queue<T>::push(const T &item){
//    if(size==0){
//        this->first=new Node<T>(item);
//        this->last=this->first;
//    }else{
//        Node<T> *aux=this->first;
//        this->first=new Node<T>(item);
//        this->first->next=aux;
//
//    }
//    size++;
//}