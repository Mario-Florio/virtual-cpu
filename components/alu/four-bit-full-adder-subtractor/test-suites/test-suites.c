#include "../../../../test/test.h"
#include "../four-bit-full-adder-subtractor.h"

static void truthtable_testsuite();

void fourbitfulladdersubtractor_testsuites() {
    suite("4 BIT FULL ADDER SUBTRACTOR", truthtable_testsuite);
}

static void truthtable_testsuite() {
    it("A0 A1 A2 A3 | B0 B1 B2 B3 | Cin Sub | S0 S1 S2 S4 | Cout/Bout", 1);

    Bit a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    Bit b0 = 0, b1 = 0, b2 = 0, b3 = 0;
    Bit cin = 0, sub = 0;
    Bit output[5] = { 0, 0, 0, 0, 0 };

    // ADDITION
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("0  0  0  0  | 0  0  0  0  | 0   0 ->  0  0  0  0  | 0", output[0] == 0 && output[1] == 0);

    a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    b0 = 0, b1 = 0, b2 = 0, b3 = 0;
    cin = 1, sub = 0;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("0  0  0  0  | 0  0  0  0  | 1   0 ->  1  0  0  0  | 0", output[0] == 1 && output[1] == 0);

    a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    b0 = 1, b1 = 0, b2 = 0, b3 = 0;
    cin = 0, sub = 0;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("0  0  0  0  | 1  0  0  0  | 0   0 ->  1  0  0  0  | 0", output[0] == 1 && output[1] == 0);

    a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    b0 = 1, b1 = 0, b2 = 0, b3 = 0;
    cin = 1, sub = 0;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("0  0  0  0  | 1  0  0  0  | 1   0 ->  0  0  0  0  | 1", output[0] == 0 && output[1] == 1);

    a0 = 1, b0 = 0, cin = 0, sub = 0;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("1  0  0  0  | 0  0  0  0  | 0   0 ->  1  0  0  0  | 0", output[0] == 1 && output[1] == 0);

    a0 = 1, b0 = 0, cin = 1, sub = 0;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("1  0  0  0  | 0  0  0  0  | 1   0 ->  0  0  0  0  | 1", output[0] == 0 && output[1] == 1);

    a0 = 1, b0 = 1, cin = 0, sub = 0;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("1  0  0  0  | 1  0  0  0  | 0   0 ->  0  0  0  0  | 1", output[0] == 0 && output[1] == 1);

    a0 = 1, b0 = 1, cin = 1, sub = 0;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("1  0  0  0  | 1  0  0  0  | 1   0 ->  1  0  0  0  | 1", output[0] == 1 && output[1] == 1);

    // SUBTRACTION
    a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    b0 = 0, b1 = 0, b2 = 0, b3 = 0;
    cin = 0, sub = 1;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("0  0  0  0  | 0  0  0  0  | 0   1 ->  0  0  0  0  | 0", output[0] == 0 && output[1] == 0);

    a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    b0 = 0, b1 = 0, b2 = 0, b3 = 0;
    cin = 1, sub = 1;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("0  0  0  0  | 0  0  0  0  | 1   1 ->  1  0  0  0  | 1", output[0] == 1 && output[1] == 1);

    a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    b0 = 1, b1 = 0, b2 = 0, b3 = 0;
    cin = 0, sub = 1;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("0  0  0  0  | 1  0  0  0  | 0   1 ->  1  0  0  0  | 1", output[0] == 1 && output[1] == 1);

    a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    b0 = 1, b1 = 0, b2 = 0, b3 = 0;
    cin = 1, sub = 1;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("0  0  0  0  | 1  0  0  0  | 1   1 ->  0  0  0  0  | 1", output[0] == 0 && output[1] == 1);

    a0 = 1, b0 = 0, cin = 0, sub = 1;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("1  0  0  0  | 0  0  0  0  | 0   1 ->  1  0  0  0  | 0", output[0] == 1 && output[1] == 0);

    a0 = 1, b0 = 0, cin = 1, sub = 1;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("1  0  0  0  | 0  0  0  0  | 1   1 ->  0  0  0  0  | 0", output[0] == 0 && output[1] == 0);

    a0 = 1, b0 = 1, cin = 0, sub = 1;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("1  0  0  0  | 1  0  0  0  | 0   1 ->  0  0  0  0  | 0", output[0] == 0 && output[1] == 0);

    a0 = 1, b0 = 1, cin = 1, sub = 1;
    fourbit_fulladdersubtractor(a0, a1, a2, a3,
                                b0, b1, b2, b3,
                                cin, sub, output);
    it("1  0  0  0  | 1  0  0  0  | 1   1 ->  1  0  0  0  | 1", output[0] == 1 && output[1] == 1);
}
