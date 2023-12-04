#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

Node::Node(Student* studenttmp) : student(studenttmp) {
    nextNode = nullptr;
}

Node::~Node() {}

Node* Node::getNext() {
    return nextNode;
}

Student* Node::getStudent() {
    return student;
}

void Node::setNext(Node* newNode) {
    nextNode = newNode;
}