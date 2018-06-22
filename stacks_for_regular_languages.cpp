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
    stack_p1<char> newStack;
    char first = *inputString; // Stores the first character of the pass in string
    bool bEncountered = false; // The value of this bool determines the behavior of each iteration of the first for loop

    // fringe case to ensure strings that don't start with A do not return true
    if (first != 'A') {
        return false;
    }

    // iterates through string checking for non 'A' and 'B' characters and adding the first character of the string to the
    // stack every time it is encountered.
    for(char* it = inputString; *it; ++it) {
        if ((*it != 'A') && (*it != 'B')){
            return false;
        }

        //Add's A's to the stack until a B is encountered in the string
        if (bEncountered == false) {
            if (*it == 'A') {
                newStack.push(*it);
            }

            else {
                bEncountered = true;
            }

            //once a B has been encountered, methods returns false if another A is found in the string
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
    char first = *inputString; // Stores first character of passed in string
    stack_p1<std::string> subStrings; // Stores all substrings in passed in string that are of the form (A^nB^n)
    stack_p1<std::string> subStrings2; // identical to "subStrings" stack above, used later in the method
    bool bEncountered = false; // bool variable used to decide behavior of first for loop on each iteration
    std::string substring; // temporarily stores substrings of the passed in sting
    std::string postStackString = ""; /* stores string created from popping "substrings" off of "SubStrings2" stack
                                        * used to help determine if the value of n and m are the same for each substring
                                        * of the form (A^nB^m) */

    //fringe case prevents string that don't start with A from returning true;
    if (first != 'A') {
        return false;
    }

    /* ensures each character from passed in string is an A or B. Also detects substrings of the form A^nB^m
     * (substrings will be checked later in the method to ensure m = n) in "inputString"
     * and pushes each substring to both stacks "subStrings and subStrings2" */
    for(char* it = inputString; *it; ++it) {
        if ((*it != 'A') && (*it != 'B')){ // imediatelly returns false if a character is not A or B
            return false;
        }

        // If a B has not been encountered yet in "inputString," and the current char is A, adds A to subString variable,
        // if current char is B, changes bEncountered to true;
        if (bEncountered == false) {
            if (*it == 'A') {
                substring +=  *it;
            }

            else {
                bEncountered = true;
            }
        }

        /*Adds B's to subString variable until another A is encountered. When another A is encountered, adds the current
         *subString to the stacks (subStrings and subStrings2), starts a new substring, and changes bEncountered back to false */
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

    subStrings.push(substring); //Pushes the final substring to the stacks
    subStrings2.push(substring); //Pushes the final substring to the stacks

    // pushes the contents of subStrings (the stack) to a string to be compared to the original passed in string
    while (subStrings.isEmpty() != true){
        postStackString += subStrings.pop();
    }

    // If the string created in the previous loop matches the original passed in string,
    // then n and m must be the same for all substrings of the form (A^nB^m)
    if(inputString != postStackString){
        return false;
    }

    // Now we only need to ensure that n = m for all subStrings of the form A^nB^m, which is done by passing all subStrings
    // into L2. If a subString fails L2, L3 returns false.
    while (subStrings2.isEmpty() != true){
        if (L2(&subStrings2.pop().at(0)) == false) {
            return false;
        }
    }

    // If this line is reached, all previous test lines have been passed and "inputSting" must be of the form (A^nB^n)^p
    return true;
}

bool stacks_for_regular_languages::L4(char *inputString) {
    char first = *inputString;
    stack_p1<std::string> subStrings;
    stack_p1<std::string> subStrings2;
    bool bEncountered = false;
    std::string substring;
    std::string postStackString = "";

    /*
     * Between these lines, L4 uses the same algorithm as L3, refer to L3 for comments
     */
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

    /*
     * Between these lines, L4 uses the same algorithm as L3, refer to L3 for comments
     */

    // fringe case where "inputString" consists of only A's causes L4 to return true when it should return false.
    // The following if statement prevents this logic error
    if(bEncountered == false){
        return false;
    }

    //if this line is reached "inputString has passed all tests and must be of the form (A^nB^m)^p
    return true;
}
