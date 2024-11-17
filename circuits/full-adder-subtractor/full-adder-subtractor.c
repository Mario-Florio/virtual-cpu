#include "full-adder-subtractor.h"
#include "../../logic-gates/logic-gates.h"
#include "../full-adder/full-adder.h"

Bit* full_adder_subtractor(Bit a, Bit b, Bit cin, Bit sub, Bit* output) {

    full_adder(_xor(a, sub), b, cin, output);

    output[0] = _xor(output[0], sub);

    return output;
}
