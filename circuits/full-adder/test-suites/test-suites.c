#include "../../../test/test.h"
#include "../full-adder.h"

static void truthtable_testsuite();

void fulladder_testsuites() {
    suite("=======FULL ADDER========", truthtable_testsuite);
}

static void truthtable_testsuite() {
    it("A B Cin  S Cout", 1);

    Bit a = 0, b = 0, cin = 0;
    Bit output[2] = { 0, 0 };

    full_adder(a, b, cin, output);
    it("0 0 0 -> 0 0", output[0] == 0 && output[1] == 0);

    a = 0, b = 0, cin = 1;
    full_adder(a, b, cin, output);
    it("0 0 1 -> 1 0", output[0] == 1 && output[1] == 0);

    a = 1, b = 0, cin = 0;
    full_adder(a, b, cin, output);
    it("0 1 0 -> 1 0", output[0] == 1 && output[1] == 0);

    a = 0, b = 1, cin = 1;
    full_adder(a, b, cin, output);
    it("0 1 1 -> 0 1", output[0] == 0 && output[1] == 1);

    a = 1, b = 0, cin = 0;
    full_adder(a, b, cin, output);
    it("1 0 0 -> 1 0", output[0] == 1 && output[1] == 0);

    a = 1, b = 0, cin = 1;
    full_adder(a, b, cin, output);
    it("1 0 1 -> 0 1", output[0] == 0 && output[1] == 1);

    a = 1, b = 1, cin = 0;
    full_adder(a, b, cin, output);
    it("1 1 0 -> 0 1", output[0] == 0 && output[1] == 1);

    a = 1, b = 1, cin = 1;
    full_adder(a, b, cin, output);
    it("1 1 1 -> 1 1", output[0] == 1 && output[1] == 1);
}
