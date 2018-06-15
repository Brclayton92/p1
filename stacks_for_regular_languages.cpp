//
// Created by Brock on 6/14/2018.
//
#include "stacks_for_regular_languages.h"
#include "stack_p1.h"
#include "stack_p1.cpp"

bool stacks_for_regular_languages::L1(char *inputString) {
    stack_p1<char> newStack;
    char first = *inputString;

    // iterates through string checking for non 'A' and 'B characters and adding the first character of the string to the
    // stack every time it is encountered.
    for(char* it = inputString; *it; ++it) {
        if (*it == 'A' || *it =='B'){
            if (*it == first)
                newStack.push(*it);
        }

        else {
            return false;
        }
    }

    // iterates through the string again, popping off the stack each time a character that is not
    // the first character of the string is encountered
    for(char* it = inputString; *it; ++it) {
        if (*it != first){ // first if statement is entered every time current character is not "first character"
            if (newStack.isEmpty() != true) { // pops from that for each "non first" character encountered
                newStack.pop();
            }

            else { // if a "non first" character is encountered, but stack is already empty, returns false.
                return false;
            }
        }
    }

    // if first if statement is passed, and stack is empty, string fits the language => return true.
    // otherwise return false
    if (newStack.isEmpty() == true){
        return true;
    }

    else {
        return false;
    }
}

bool stacks_for_regular_languages::L2(char *inputString) {
    return false;
}

bool stacks_for_regular_languages::L3(char *inputString) {
    return false;
}

bool stacks_for_regular_languages::L4(char *inputString) {
    return false;
}
