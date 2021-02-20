//
// Created by Jairo Riaño on 20/02/21.
//

#include "LinkedDouble.h"
template<class T>
LinkedDouble<T>::LinkedDouble() {
    head = NULL;
    last = NULL;
}

template<class T>
bool LinkedDouble<T>::isEmpty() {
    return head == NULL && last == NULL;
}

template<class T>
void LinkedDouble<T>::addNodeFirst(T info) {
    Node<T>* newNode = new Node<T>(info);
    if ( isEmpty( ) ){
        head = newNode;
        last = newNode;
    }else{
        head->previous = newNode;
        newNode->next = head;
        head = newNode;
    }
}

template<class T>
void LinkedDouble<T>::addNodeLast(T info) {
    Node<T>* newNode = new Node<T>(info);
    if ( isEmpty( ) ){
        head = newNode;
        last = newNode;
    }else{
        last->next = newNode;
        newNode->previous = last;
        last = newNode;
    }
}

template<class T>
std::vector<T> LinkedDouble<T>::getList(bool forward) {
    std::vector<T> out;
    Node<T>* aux = forward ? head : last;
    while( aux != NULL ){
        out.push_back( aux->info );
        aux = forward ? aux->next : aux->previous;
    }

    return out;
}

template<class T>
LinkedDouble<T>::~LinkedDouble() {

}


