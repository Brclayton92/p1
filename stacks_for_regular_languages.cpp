//
// Created by Brock on 6/14/2018.
//
#include "stacks_for_regular_languages.h"
#include "stack_p1.h"
#include "stack_p1.cpp"

bool stacks_for_regular_languages::L1(char *inputString) {
    stack_p1<char> newStack;
    char first = *inputString;

    for(char* it = inputString; *it; ++it) {
        if (*it == 'A' || *it =='B'){
            if (*it == first)
                newStack.push(*it);
        }

        else {
            return false;
        }
    }

    for(char* it = inputString; *it; ++it) {
        if (*it != first){
            if (newStack.isEmpty() != true) {
                newStack.pop();
            }

            else {
                return false;
            }
        }
    }

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
