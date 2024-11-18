#include "four-bit-full-adder-subtractor.h"
#include "../../../logic-gates/logic-gates.h"
#include "../../../circuits/full-adder-subtractor/full-adder-subtractor.h"

Bit* fourbit_fulladdersubtractor(Bit a0, Bit a1, Bit a2, Bit a3,
                                 Bit b0, Bit b1, Bit b2, Bit b3,
                                 Bit cin, Bit sub, Bit* output) {

    Bit temp_twobit_output[2] = { 0, 0 };
    Bit cout;

    full_adder_subtractor(a0, b0, cin, sub, temp_twobit_output);
    output[0] = temp_twobit_output[0];

    cout = temp_twobit_output[1];
    full_adder_subtractor(a1, b1, cout, sub, temp_twobit_output);
    output[1] = temp_twobit_output[0];

    cout = temp_twobit_output[1];
    full_adder_subtractor(a2, b2, cout, sub, temp_twobit_output);
    output[2] = temp_twobit_output[0];

    cout = temp_twobit_output[1];
    full_adder_subtractor(a3, b3, cout, sub, temp_twobit_output);
    output[4] = temp_twobit_output[0], output[5] = temp_twobit_output[1];

    return output;
}
