//
// Created by yordi on 8/3/21.
//

#include <iostream>
#include <sstream> //for std::stringstream
#include <string>  //for std::string
#include "Collector.h"

using namespace std;

class Node;

/*
 * Clase que forma la lista Collector
 */
AddressNode::AddressNode(){
    value = 0;
    next = 0;
}

AddressNode* AddressNode::getNext(){
    return next;
}

void AddressNode::setNext(AddressNode* nodo){
    next = nodo;
}

Node* AddressNode::getValue(){
    return value;
}

void AddressNode::setValue(Node* node){
    value = node;
}

/*
 * Clase que almacena direcciones para reciclar nodos de la clase List
 */

//Collector *Collector::colectorInst = nullptr;

Collector::Collector(){
    head = 0;
    length = 0;
}

/*
 * Almacena la dirección de un nodo de la clase List.
 */
void Collector::AddAddress(Node* n){
    AddressNode* tmp = new AddressNode();
    tmp->setValue(n);
    tmp->setNext(NULL);
    if (length == 0) {
        head = tmp;
    } else {
        tmp->setNext(head);
        head = tmp;
    }
    length++;



    .
}

int Collector::getLength() {
    return length;
}

Node* Collector::getUsedNode() {
    Node* tmp = head->getValue();
    deleteNode();
    return tmp;
}

/*
 * Elimina un elemento del Collector
 */
void Collector::deleteNode() {
    AddressNode *tmp = head;
    head = head->getNext();
    tmp->setNext(0);
    delete tmp;
    length--;
}

/*
 * Imprime los elementos de la lista Collector.
 */
void Collector::print(){
    if (length == 0) {
        cout << "Lista Collector vacía" << endl;
    } else {
        AddressNode *temp = head; //Aquí no tendría que eliminar el temp luego?
        string text = "Direcciones alamcenadas en el Collector: [";
        for (int i = 0; i < length; i++) {
            const Node* address = static_cast<const Node*>(temp->getValue());
            std::stringstream ss;
            ss << address;
            string name = ss.str();
            text += " " + name;
            temp = temp->getNext();
        }
        text = text + " ]";
        cout << text << endl;
    }
}

