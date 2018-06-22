//
//  stack_p1.h
//
//
//  Created by Resch,Cheryl on 5/30/18.
//

#ifndef stack_p1_h
#define stack_p1_h



template <typename T>
class stack_p1
{
private:
    struct node { // stores data and a pointer to the item added before it
        T data;
        node *next;
    };
    node *top = nullptr; // Stores item that was most recently added to the stack.
    int size = 0; // tracks number of items in the Stack
public:
    bool isEmpty();
    T pop();
    void push(T item);
    T peek();
};



#endif /* stack_p1_h */
