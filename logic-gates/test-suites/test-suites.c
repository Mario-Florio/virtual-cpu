
#include "../../test/test.h"
#include "../logic-gates.h"

static void buffer_testsuite();
static void not_testsuite();
static void and_testsuite();
static void nand_testsuite();
static void or_testsuite();
static void nor_testsuite();
static void xor_testsuite();

void logicgates_testsuites() {
    suite("==========BUFFER==========", buffer_testsuite);
    suite("==========NOT=============", not_testsuite);
    suite("==========AND=============", and_testsuite);
    suite("==========NAND============", nand_testsuite);
    suite("==========OR==============", or_testsuite);
    suite("==========NOR=============", nor_testsuite);
    suite("==========XOR=============", xor_testsuite);
}

static void buffer_testsuite() {
    it("0 -> 0", _buffer(0) == 0);
    it("1 -> 1", _buffer(1) == 1);
}

static void not_testsuite() {
    it("0 -> 1", _not(0) == 1);
    it("1 -> 0", _not(1) == 0);
}

static void or_testsuite() {
    it("0 0 -> 1", _or(0, 0) == 0);
    it("0 1 -> 1", _or(0, 1) == 1);
    it("1 0 -> 1", _or(1, 0) == 1);
    it("1 1 -> 0", _or(1, 1) == 1);
}

static void nor_testsuite() {
    it("0 0 -> 1", _nor(0, 0) == 1);
    it("0 1 -> 1", _nor(0, 1) == 0);
    it("1 0 -> 1", _nor(1, 0) == 0);
    it("1 1 -> 0", _nor(1, 1) == 0);
}

static void xor_testsuite() {
    it("0 0 -> 0", _xor(0, 0) == 0);
    it("0 1 -> 1", _xor(0, 1) == 1);
    it("1 0 -> 1", _xor(1, 0) == 1);
    it("1 1 -> 0", _xor(1, 1) == 0);
}

static void and_testsuite() {
    it("0 0 -> 0", _and(0, 0) == 0);
    it("0 1 -> 0", _and(0, 1) == 0);
    it("1 0 -> 0", _and(1, 0) == 0);
    it("1 1 -> 1", _and(1, 1) == 1);
}

static void nand_testsuite() {
    it("0 0 -> 1", _nand(0, 0) == 1);
    it("0 1 -> 1", _nand(0, 1) == 1);
    it("1 0 -> 1", _nand(1, 0) == 1);
    it("1 1 -> 0", _nand(1, 1) == 0);
}
