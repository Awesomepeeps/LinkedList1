#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

main (void) {

    node* first = nullptr;
    node* current = nullptr;
    node* node1 = new node(new student("Michael", "Fu", 4.0, 321321));
    node* node2 = new node(new student("Nikaansh", "Singh", 4.125, 453453));
    node* node3 = new node(new student("Brandon", "Huyng", 4.13, 567567));

    first = node1;
    current = node1;
    node1->setNext(node2);
    node2->setNext(node3);
    node3->setNext(nullptr);

    for (int i = 0; i < 3; i++) {
        student* studenttmp = current->getStudent();
        studenttmp->printAll();
        current = current->getNext();
    }

    delete node1;
    delete node2;
    delete node3;
}