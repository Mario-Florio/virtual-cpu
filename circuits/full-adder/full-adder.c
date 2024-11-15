#include "../../logic-gates/logic-gates.h"

char* full_adder(char a, char b, char cin, char* output) {

    char d = _xor(a, b);
    char sum = _xor(d, cin);

    char e = _and(a, b);
    char f = _and(cin, d);
    char cout = _xor(e, f);

    output[0] = sum;
    output[1] = cout;

    return output;
}
