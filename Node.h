//
// Created by yordi on 11/3/21.
//

#ifndef TAREAIDATOSII_NODE_H
#define TAREAIDATOSII_NODE_H
#include <iostream>




class Node{
private:
    int value;
    Node *next;
public:
    Node();
    Node* getNext();
    void setNext(Node* nodo);
    int getValue();
    void setValue(int num);
    void * operator new(size_t size);
    void operator delete(void* pVoid);
};


#endif //TAREAIDATOSII_NODE_H
