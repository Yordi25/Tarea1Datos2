//
// Created by yordi on 8/3/21.
//

#ifndef TAREAIDATOSII_COLLECTOR_H
#define TAREAIDATOSII_COLLECTOR_H


class Node;
/*
 * Clase que forma la lista Collector
 */
class AddressNode
{
private:
    Node* value;
    AddressNode* next;
public:
    AddressNode();
    AddressNode* getNext();
    void setNext(AddressNode* nodo);
    Node* getValue();
    void setValue(Node* node);
};

/*
 * Clase que almacena direcciones para reciclar nodos de la clase List
 */
class Collector {
private:
    AddressNode *head;
    int length;

public:
    Collector();
    void AddAddress(Node* n);
    int getLength();
    Node* getUsedNode();
    void deleteNode();
    void print();
};

inline Collector* colector = new Collector;


#endif //TAREAIDATOSII_COLLECTOR_H
