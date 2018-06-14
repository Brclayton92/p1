//
// Created by Brock on 6/14/2018.
//

#include "stack_p1.h"
#include <iostream>
using namespace std;

template<typename T>
bool stack_p1<T>::isEmpty() {
    if (size == 0){
        return true;
    }
    else{
        return false;
    }
}

template<typename T>
T stack_p1<T>::pop() {
    T data = top->data;
    node *temp = new node;
    temp = top;
    top = top->next;
    delete temp;
    size--;
    return data; // returns contents of top->data after deleting the node
}

template<typename T>
void stack_p1<T>::push(T item) {
    node* newItem = new node;
    node* temp = top;
    top = newItem;
    top->data = item;
    top->next = temp;
    size++;
    return;
}

template<typename T>
T stack_p1<T>::peek() {
    return top->data;
}

