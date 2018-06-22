//
// Created by Brock on 6/14/2018.
//

#include "stack_p1.h"
#include <iostream>
using namespace std;

// returns true if size = 0, false otherwise.
template<typename T>
bool stack_p1<T>::isEmpty() {
    if (size == 0){
        return true;
    }
    else{
        return false;
    }
}

// causes segmentation fault if called when stack is empty
template<typename T>
T stack_p1<T>::pop() {
    T data = top->data; // stores data of top node so top can be deleted before return statement
    node *temp; // temp node used to store current top
    temp = top; // sets temp to top
    top = top->next; // sets variable "top" to new top node
    delete temp; // deletes old top node
    size--; // decrements size in accordance with stack losing a node
    return data; // returns contents of top->data after deleting the node
}

template<typename T>
void stack_p1<T>::push(T item) {
    node* newItem = new node; // creates a new node to store input data
    node* temp = top; // creates a temp duplicate of current top
    top = newItem; // changes top to the newly created node
    top->data = item; // stores pass in data to new top
    top->next = temp; // links new top to the other items in the stack
    size++; //increments size in accordance with new node being added
    return;
}

// returns data stored in current top node, causes segmentation fault if called when stack is empty
template<typename T>
T stack_p1<T>::peek() {
    T topData = top->data;
    return topData;
}

