#include <iostream>
#include "List.h"
#include "Collector.h"

int main() {
    List lista;
    lista.add(1);
    lista.add(2);
    lista.add(3);
    lista.add(4);
    lista.add(5);
    lista.deleteInPos(4);
    lista.deleteInPos(0);
    lista.deleteInPos(1);
    lista.print();
    colector->print();
    lista.add(7);
    lista.add(7);
    lista.add(7);
    lista.printAddress();
    colector->print();
    return 0;
}
