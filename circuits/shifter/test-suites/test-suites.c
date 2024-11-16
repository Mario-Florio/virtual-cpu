#include "../../../test/test.h"
#include "../shifter.h"

static void truthtable_testsuite();

void shifter_testsuites() {
    suite("=========SHIFTER==========", truthtable_testsuite);
}

static void truthtable_testsuite() {
    it("A Cin Div -> Bout R0 R1 Cout", 1);

    char a = 0, cin = 0, div = 0;
    char output[4] = { 0, 0, 0 };

    shifter(a, cin, div, output);
    it("0 0   0   -> 0    0  0  0", output[0] == 0 &&
                                    output[1] == 0 &&
                                    output[2] == 0 &&
                                    output[3] == 0);

    a = 1, cin = 0, div = 0;
    shifter(a, cin, div, output);
    it("1 0   0   -> 0    0  1  0", output[0] == 0 &&
                                    output[1] == 0 &&
                                    output[2] == 1 &&
                                    output[3] == 0);

    a = 0, cin = 1, div = 0;
    shifter(a, cin, div, output);
    it("0 1   0   -> 0    0  0  1", output[0] == 0 &&
                                    output[1] == 0 &&
                                    output[2] == 0 &&
                                    output[3] == 1);

    a = 1, cin = 1, div = 0;
    shifter(a, cin, div, output);
    it("1 1   0   -> 0    0  1  1", output[0] == 0 &&
                                    output[1] == 0 &&
                                    output[2] == 1 &&
                                    output[3] == 1);

    a = 0, cin = 0, div = 1;
    shifter(a, cin, div, output);
    it("0 0   1   -> 0    0  0  0", output[0] == 0 &&
                                    output[1] == 0 &&
                                    output[2] == 0 &&
                                    output[3] == 0);

    a = 1, cin = 0, div = 1;
    shifter(a, cin, div, output);
    it("1 0   1   -> 1    0  0  0", output[0] == 1 &&
                                    output[1] == 0 &&
                                    output[2] == 0 &&
                                    output[3] == 0);

    a = 0, cin = 1, div = 1;
    shifter(a, cin, div, output);
    it("0 1   1   -> 0    1  0  0", output[0] == 0 &&
                                    output[1] == 1 &&
                                    output[2] == 0 &&
                                    output[3] == 0);

    a = 1, cin = 1, div = 1;
    shifter(a, cin, div, output);
    it("1 1   1   -> 1    1  0  0", output[0] == 1 &&
                                    output[1] == 1 &&
                                    output[2] == 0 &&
                                    output[3] == 0);
}
