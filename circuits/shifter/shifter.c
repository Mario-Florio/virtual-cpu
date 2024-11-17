#include "./shifter.h"
#include "../../logic-gates/logic-gates.h"

Bit* shifter(Bit a, Bit cin, Bit div, Bit* output) { 
    Bit bout = _and(div, a);
    Bit res0 = _and(div, cin);
    Bit res1 = _and(a, _xor(div, a));
    Bit cout = _and(cin, _xor(div, cin));

    output[0] = bout, output[1] = res0, output[2] = res1, output[3] = cout;

    return output;
}
