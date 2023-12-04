#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>
#include "Student.h"

class Node {
    public:
        Node(Student*); // creating the node requires passing in a student
        ~Node(); // destructor for the node
        Node* getNext(); // returns the pointer to the next node
        Student* getStudent(); // returns the pointer to the student for this node
        void setNext(Node*); // sets the pointer to the next node for linked list
    private:

        Node* nextNode; // pointer to the next node in the list
        Student* student; // pointer to the student for the current node 
};

#endif