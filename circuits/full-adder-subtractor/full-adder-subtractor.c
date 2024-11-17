#include "full-adder-subtractor.h"
#include "../../logic-gates/logic-gates.h"
#include "../full-adder/full-adder.h"

char* full_adder_subtractor(char a, char b, char cin, char sub, char* output) {

    full_adder(_xor(a, sub), b, cin, output);

    output[0] = _xor(output[0], sub);

    return output;
}
