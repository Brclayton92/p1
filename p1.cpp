#include <iostream>
#include "stack_p1.cpp"
using namespace std;

int main() {
    stack_p1<char> newStack;
    newStack.push('e');
    newStack.push('d');
    newStack.push('c');
    newStack.push('b');
    newStack.push('a');

    cout << newStack.isEmpty() << endl;
    cout << "peeking:" << newStack.peek() << endl;

    while (!newStack.isEmpty()) {
        cout << newStack.pop();
    }




    cout << endl;
    cout << newStack.isEmpty();

    return 0;
}