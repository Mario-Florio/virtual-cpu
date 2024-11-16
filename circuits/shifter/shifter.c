#include "../../logic-gates/logic-gates.h"

char* shifter(char a, char cin, char div, char* output) { 
    if (div) {
        output[0] = a, output[1] = cin, output[2] = 0, output[3] = 0;
    } else {
        output[0] = 0, output[1] = 0, output[2] = a, output[3] = cin;
    }

    return output;
}
