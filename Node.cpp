//
// Created by yordi on 11/3/21.
//

#include "Node.h"
#include "Collector.h"

Node::Node()
{
    next = 0;
    value = 0;
}

Node* Node::getNext(){
    return next;
}

void Node::setNext(Node* nodo){
    next = nodo;
}
int Node::getValue(){
    return value;
}

void Node::setValue(int num){
    value = num;
}

void* Node::operator new(size_t size){
    void* p;
    if(Collector::getCollector()->getLength() > 0){
        p = Collector::getCollector()->getDeletedNode();
    }
    else{
        p = malloc(size);
    }
    return p;
}

void Node::operator delete(void* pVoid){
    Collector::getCollector()->AddDeletedNode(pVoid);
}