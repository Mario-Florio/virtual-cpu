#include "../../logic-gates/logic-gates.h"

char* full_adder(char a, char b, char cin, char* output) {

    char a_xor_b = _xor(a, b);
    char sum = _xor(a_xor_b, cin);

    char cout = _xor(_and(a, b), _and(cin, a_xor_b));

    output[0] = sum;
    output[1] = cout;

    return output;
}
