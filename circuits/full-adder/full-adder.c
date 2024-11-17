#include "./full-adder.h"
#include "../../logic-gates/logic-gates.h"

Bit* full_adder(Bit a, Bit b, Bit cin, Bit* output) {

    Bit a_xor_b = _xor(a, b);
    Bit sum = _xor(a_xor_b, cin);

    Bit cout = _xor(_and(a, b), _and(cin, a_xor_b));

    output[0] = sum;
    output[1] = cout;

    return output;
}
