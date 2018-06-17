#include <iostream>
#include "stack_p1.h"
#include "stacks_for_regular_languages.h"
using namespace std;

int main() {
    string inputString = "AAABBBAAABBBAAABBB";

    stacks_for_regular_languages sfrl;
    char* inputCharPtr = &inputString[0];
    cout << sfrl.L3(inputCharPtr);
    return 0;
}