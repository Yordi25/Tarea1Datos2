//
// Created by yordi on 8/3/21.
//

#include <iostream>
#include <sstream> //for std::stringstream
#include <string>  //for std::string
#include "Collector.h"
#include "Node.h"

using namespace std;

Collector* Collector::colector = 0;

Collector::Collector() {
    head = 0;
    length = 0;
}

Collector* Collector::getCollector() {
    if(colector == 0){
        colector = new Collector();
    }
    return colector;
}

void Collector::AddDeletedNode(void* voidPtr){
    Node* nodePtr = (Node*)voidPtr;
    nodePtr->setValue(NULL);
    nodePtr->setNext(head);
    head = nodePtr;
    length++;
}

int Collector::getLength() {
    return length;
}

void* Collector::getDeletedNode() {
    void* tmp = (void*)head;
    deleteNode();
    return tmp;
}

/*
 * Elimina un elemento del Collector
 */
void Collector::deleteNode() {
    Node* tmp = head;
    head = head->getNext();
    tmp->setNext(0);
    length--;
}


/*
 * Imprime los elementos de la lista Collector.
 */
void Collector::print(){
    if (length == 0) {
        cout << "Lista Collector vacía" << endl;
    } else {
        Node *temp = head; //Aquí no tendría que eliminar el temp luego?
        string text = "Direcciones alamcenadas en el Collector: [";
        for (int i = 0; i < length; i++) {
            const Node* address = static_cast<const Node*>(temp);
            std::stringstream ss;
            ss << address;
            std::string name = ss.str();
            text += " " + name;
            temp = temp->getNext();
        }
        text = text + " ]";
        cout << text << endl;
    }
}

