//
// Created by yordi on 8/3/21.
//

#include "List.h"
#include "Collector.h"
#include <sstream> //for std::stringstream
#include <string>  //for std::string
#include <iostream>

using namespace std;



/*
 * Clase List que almacena numeros (int). Formada por nodos de la clase Node
 */
List::List(){
    head = 0;
    length = 0;
}

/*
 * Agrega un número int a la lista.
 */
void List::add(int n){
    Node* tmp = new Node;
    tmp->setValue(n);
    tmp->setNext(0);
    if (length == 0) {
        head = tmp;
    } else {
        tmp->setNext(head);
        head = tmp;
    }
    length++;
}

/*
 * Imprime el valor almacenado en los nodos que conforman la lista List.
 */
void List::print(){
    if (length == 0) {
        std::cout << "Lista vacía" << std::endl;
    } else {
        Node *temp = head; //Aquí no tendría que eliminar el temp luego?
        string text = "Elementos en la lista: [";
        for (int i = 0; i < length; i++) {
            text = text + " " + std::to_string(temp->getValue());
            temp = temp->getNext();
        }
        text = text + " ]";
        std::cout << text << std::endl;
    }
}

/*
 * Imprime el número almacenado en el nodo en la posición de entrada.
 * E: pos: int
 */
void List::numInPos(int pos){
    if (length == 0 or pos > (length - 1) or pos < 0) {
        std::cout << "Esa posición no existe" << std::endl;
    } else {
        Node *tmp = head;
        for (int i = 0; i != pos; i++) {
            tmp = tmp->getNext();
        }
        std::cout << tmp->getValue() << std::endl;
    }
}

int List::getLength(){
    return length;
}

/*
 * Elimina de la lista el nodo en la posición de entrada.
 * E: pos: int
 */
void List::deleteInPos(int pos){
    if (length != 0) {
        if (pos > (length - 1) or pos < 0) {
            cout << "Posición inválida" << endl;
        } else {
            if (pos == 0) {
                Node *tmp = head;
                head = head->getNext();
                tmp->setNext(NULL);
                delete tmp;
            } else if (pos == length - 1) {
                Node *tmp = head;
                for (int i = 0; i != pos - 1; i++) {
                    tmp = tmp->getNext();
                }
                delete tmp->getNext();
                tmp->setNext(NULL);
            } else {
                Node *tmp = head;
                for (int i = 0; i != pos - 1; i++) {
                    tmp = tmp->getNext();
                }
                tmp->setNext(tmp->getNext()->getNext());
                delete tmp->getNext();
            }
            length--;
        }
    } else {
        cout << "Lista Vacía" << endl;
    }
}

/*
 * Imprime las direcciones donde están los nodos que conforman la lista.
 */
void List::printAddress(){
    if (length == 0) {
        std::cout << "Lista vacía" << std::endl;
    } else {
        Node *temp = head; //Aquí no tendría que eliminar el temp luego?
        string text = "Direcciones de los nodos de la lista: [";
        for (int i = 0; i < length; i++) {
            const Node* address = static_cast<const Node*>(temp);
            std::stringstream ss;
            ss << address;
            std::string name = ss.str();
            text += " " + name;
            temp = temp->getNext();
        }
        text = text + " ]";
        std::cout << text << std::endl;
    }
}