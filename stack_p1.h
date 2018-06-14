//
//  stack_p1.h
//
//
//  Created by Resch,Cheryl on 5/30/18.
//

#ifndef stack_p1_h
#define stack_p1_h
#include <list>

struct node {
    char data;
    node *next;
};

template <typename T>
class stack_p1
{
private:
    node *top = nullptr;
    int size = 0;
public:
    bool isEmpty();
    T pop();
    void push(T item);
    T peek();
};



#endif /* stack_p1_h */
