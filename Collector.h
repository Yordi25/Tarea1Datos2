//
// Created by yordi on 8/3/21.
//

#ifndef TAREAIDATOSII_COLLECTOR_H
#define TAREAIDATOSII_COLLECTOR_H
#include "Node.h"


//class Node;
///*
// * Clase que forma la lista Collector
// */
//class AddressNode
//{
//private:
//    Node* value;
//    AddressNode* next;
//public:
//    AddressNode();
//    AddressNode* getNext();
//    void setNext(AddressNode* nodo);
//    Node* getValue();
//    void setValue(Node* node);
//};
//
///*
// * Clase que almacena direcciones para reciclar nodos de la clase List
// */
//class Collector {
//private:
//    AddressNode *head;
//    int length;
//
//public:
//    Collector();
//    void AddDeletedNode(Node* n);
//    int getLength();
//    Node* getDeletedNode();
//    void deleteNode();
//    void print();
//};
//
//inline Collector* colector = new Collector;



/*
 * Clase que almacena direcciones para reciclar nodos de la clase List
 */
class Collector {
private:
    Node* head;
    int length;
    static Collector* colector;
public:
    Collector();
    static Collector* getCollector();
    void AddDeletedNode(void* voidPtr);
    int getLength();
    void* getDeletedNode();
    void deleteNode();
    void print();
};




#endif //TAREAIDATOSII_COLLECTOR_H
