#include "../../../test/test.h"
#include "../logic-unit.h"

static void truthtable_testsuite();

void logicunit_testsuites() {
    suite("========LOGIC UNIT========", truthtable_testsuite);
}

// M1 M2 M3 -> Logic Gate
// 0  0  0  -> AND
// 0  0  1  -> NAND
// 0  1  0  -> OR
// 1  0  0  -> NOR
// 1  1  0  -> XOR
// 1  1  1  -> XNOR

static void truthtable_testsuite() {
    it("A B M0 M1 M2 -> Conclusion", 1);

    Bit a = 0, b = 0;
    Bit m0 = 0, m1 = 0, m2 = 0;

    it("AND", 1);
    it("0 0 0  0  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("1 0 0  0  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("0 1 0  0  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("1 1 0  0  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);

    it("NAND", 1);
    it("0 0 0  0  1  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("1 0 0  0  1  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("0 1 0  0  1  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("1 1 0  0  1  ->  0", logic_unit(a, b, m0, m1, m2) == 0);

    it("OR", 1);
    it("0 0 0  1  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("1 0 0  1  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("0 1 0  1  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("1 1 0  1  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    
    it("NOR", 1);
    it("0 0 1  0  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("1 0 1  0  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("0 1 1  0  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("1 1 1  0  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);

    it("XOR", 1);
    it("0 0 1  1  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("1 0 1  1  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("0 1 1  1  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("1 1 1  1  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);

    it("XNOR", 1);
    it("0 0 1  1  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
    it("1 0 1  1  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("0 1 1  1  0  ->  0", logic_unit(a, b, m0, m1, m2) == 0);
    it("1 1 1  1  0  ->  1", logic_unit(a, b, m0, m1, m2) == 1);
}
