//
// Created by Jairo Riaño on 20/02/21.
//

#ifndef LINKDOUBLE_LINKEDDOUBLE_H
#define LINKDOUBLE_LINKEDDOUBLE_H

#include <vector>

#include "Node.h"

template <class T>
class LinkedDouble {
public:
    LinkedDouble();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

    std::vector<T> getList(bool);

    virtual ~LinkedDouble();

private:
    Node<T>* head;
    Node<T>* last;
};


#endif //LINKDOUBLE_LINKEDDOUBLE_H
