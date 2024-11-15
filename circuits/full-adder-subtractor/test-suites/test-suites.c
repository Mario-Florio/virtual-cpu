#include "../../../test/test.h"
#include "../full-adder-subtractor.h"

static void truthtable_testsuite();

void fulladdersubtractor_testsuites() {
    suite("==FULL ADDER SUBTRACTOR===", truthtable_testsuite);
}

static void truthtable_testsuite() {
    it("A B Cin Sub  Sum/Diff Cout/Bout", 1);

    char a = 0, b = 0, cin = 0, sub = 0;
    char output[2] = { 0, 0 };

    // ADDITION
    full_adder_subtractor(a, b, cin, sub, output);
    it("0 0 0   0 -> 0        0", output[0] == 0 && output[1] == 0);

    a = 0, b = 0, cin = 1, sub = 0;
    full_adder_subtractor(a, b, cin, sub, output);
    it("0 0 1   0 -> 1        0", output[0] == 1 && output[1] == 0);

    a = 0, b = 1, cin = 0, sub = 0;
    full_adder_subtractor(a, b, cin, sub, output);
    it("0 1 0   0 -> 1        0", output[0] == 1 && output[1] == 0);

    a = 0, b = 1, cin = 1, sub = 0;
    full_adder_subtractor(a, b, cin, sub, output);
    it("0 1 1   0 -> 0        1", output[0] == 0 && output[1] == 1);

    a = 1, b = 0, cin = 0, sub = 0;
    full_adder_subtractor(a, b, cin, sub, output);
    it("1 0 0   0 -> 1        0", output[0] == 1 && output[1] == 0);

    a = 1, b = 0, cin = 1, sub = 0;
    full_adder_subtractor(a, b, cin, sub, output);
    it("1 0 1   0 -> 0        1", output[0] == 0 && output[1] == 1);

    a = 1, b = 1, cin = 0, sub = 0;
    full_adder_subtractor(a, b, cin, sub, output);
    it("1 1 0   0 -> 0        1", output[0] == 0 && output[1] == 1);

    a = 1, b = 1, cin = 1, sub = 0;
    full_adder_subtractor(a, b, cin, sub, output);
    it("1 1 1   0 -> 1        1", output[0] == 1 && output[1] == 1);

    // SUBTRACTION
    a = 0, b = 0, cin = 0, sub = 1;
    full_adder_subtractor(a, b, cin, sub, output);
    it("0 0 0   1 -> 0        0", output[0] == 0 && output[1] == 0);

    a = 0, b = 0, cin = 1, sub = 1;
    full_adder_subtractor(a, b, cin, sub, output);
    it("0 0 1   1 -> 1        1", output[0] == 1 && output[1] == 1);

    a = 0, b = 1, cin = 0, sub = 1;
    full_adder_subtractor(a, b, cin, sub, output);
    it("0 1 0   1 -> 1        1", output[0] == 1 && output[1] == 1);

    a = 0, b = 1, cin = 1, sub = 1;
    full_adder_subtractor(a, b, cin, sub, output);
    it("0 1 1   1 -> 0        1", output[0] == 0 && output[1] == 1);

    a = 1, b = 0, cin = 0, sub = 1;
    full_adder_subtractor(a, b, cin, sub, output);
    it("1 0 0   1 -> 1        0", output[0] == 1 && output[1] == 0);

    a = 1, b = 0, cin = 1, sub = 1;
    full_adder_subtractor(a, b, cin, sub, output);
    it("1 0 1   1 -> 0        0", output[0] == 0 && output[1] == 0);

    a = 1, b = 1, cin = 0, sub = 1;
    full_adder_subtractor(a, b, cin, sub, output);
    it("1 1 0   1 -> 0        0", output[0] == 0 && output[1] == 0);

    a = 1, b = 1, cin = 1, sub = 1;
    full_adder_subtractor(a, b, cin, sub, output);
    it("1 1 1   1 -> 1        1", output[0] == 1 && output[1] == 1);
}
