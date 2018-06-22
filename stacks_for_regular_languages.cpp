//
// Created by Brock on 6/14/2018.
//
#include "stacks_for_regular_languages.h"
#include "stack_p1.h"
#include "stack_p1.cpp"
#include <vector>

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
    stack_p1<char> newStack;
    char first = *inputString;
    bool bEncountered = false;

    if (first != 'A') {
        return false;
    }

    // iterates through string checking for non 'A' and 'B characters and adding the first character of the string to the
    // stack every time it is encountered.
    for(char* it = inputString; *it; ++it) {
        if ((*it != 'A') && (*it != 'B')){
            return false;
        }

        if (bEncountered == false) {
            if (*it == 'A') {
                newStack.push(*it);
            }

            else {
                bEncountered = true;
            }

            if (bEncountered == true){
                if (*it == 'A'){
                    return false;
                }
            }
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

bool stacks_for_regular_languages::L3(char *inputString) {
    char first = *inputString;
    stack_p1<std::string> subStrings;
    stack_p1<std::string> subStrings2;
    bool bEncountered = false;
    std::string substring;
    std::string postStackString = "";

    if (first != 'A') {
        return false;
    }

    for(char* it = inputString; *it; ++it) {
        if ((*it != 'A') && (*it != 'B')){
            return false;
        }

        if (bEncountered == false) {
            if (*it == 'A') {
                substring +=  *it;
            }

            else {
                bEncountered = true;
            }
        }

        if (bEncountered == true){
            if (*it == 'A'){
                subStrings.push(substring);
                subStrings2.push(substring);
                substring = *it;
                bEncountered = false;
            }

            else {
                substring +=  *it;
            }
        }
    }

    subStrings.push(substring);
    subStrings2.push(substring);

    while (subStrings.isEmpty() != true){
        postStackString += subStrings.pop();
    }

    if(inputString != postStackString){
        return false;
    }

    while (subStrings2.isEmpty() != true){
        if (L2(&subStrings2.pop().at(0)) == false) {
            return false;
        }
    }

    return true;
}

bool stacks_for_regular_languages::L4(char *inputString) {
    char first = *inputString;
    stack_p1<std::string> subStrings;
    stack_p1<std::string> subStrings2;
    bool bEncountered = false;
    std::string substring;
    std::string postStackString = "";

    if (first != 'A') {
        return false;
    }

    for(char* it = inputString; *it; ++it) {
        if ((*it != 'A') && (*it != 'B')){
            return false;
        }

        if (bEncountered == false) {
            if (*it == 'A') {
                substring += *it;
            }

            else {
                bEncountered = true;
            }
        }

        if (bEncountered == true){
            if (*it == 'A'){
                subStrings.push(substring);
                subStrings2.push(substring);
                substring = *it;
                bEncountered = false;
            }

            else {
                substring +=  *it;
            }
        }
    }

    subStrings.push(substring);
    subStrings2.push(substring);

    while (subStrings.isEmpty() != true){
        postStackString += subStrings.pop();
    }

    if(inputString != postStackString){
        return false;
    }

    if(bEncountered == false){
        return false;
    }

    return true;
}
