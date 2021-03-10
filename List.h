//
// Created by yordi on 8/3/21.
//

#ifndef TAREAIDATOSII_LIST_H
#define TAREAIDATOSII_LIST_H


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

class List{
private:
    Node *head;
    int length;
public:
    List();
    void add(int n);
    void print();
    void numInPos(int pos);
    int getLength();
    void deleteInPos(int pos);
    void printAddress();
};

#endif //TAREAIDATOSII_LIST_H
