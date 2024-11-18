 /**
  * M1 M2 M3 -> Mode
  * 0  0  0  -> AND
  * 0  0  1  -> NAND
  * 0  1  0  -> OR
  * 1  0  0  -> NOR
  * 1  1  0  -> XOR
  * 1  1  1  -> XNOR
  */

#include "logic-unit.h"
#include "../../logic-gates/logic-gates.h"

static Bit multiplexer(Bit and, Bit nand,
                       Bit or, Bit nor,
                       Bit xor, Bit xnor,
                       Bit m0, Bit m1, Bit m2);

Bit logic_unit(Bit a, Bit b, Bit m0, Bit m1, Bit m3) {
    Bit conclusion = multiplexer(_and(a, b), _nand(a, b),
                                 _or(a, b), _nor(a, b),
                                 _xor(a, b), _xnor(a, b),
                                 m0, m1, m3);
    return conclusion;
}

static Bit and_multiplexer(Bit and, Bit m0, Bit m1, Bit m2);
static Bit nand_multiplexer(Bit nand, Bit m0, Bit m1, Bit m2);
static Bit or_multiplexer(Bit or, Bit m0, Bit m1, Bit m2);
static Bit nor_multiplexer(Bit nor, Bit m0, Bit m1, Bit m2);
static Bit xor_multiplexer(Bit xor, Bit m0, Bit m1, Bit m2);
static Bit xnor_multiplexer(Bit xnor, Bit m0, Bit m1, Bit m2);

static Bit multiplexer(Bit and, Bit nand,
                       Bit or, Bit nor,
                       Bit xor, Bit xnor,
                       Bit m0, Bit m1, Bit m2) {

    Bit and_conclusion = and_multiplexer(and, m0, m1, m2);
    Bit nand_conclusion = nand_multiplexer(nand, m0, m1, m2);
    Bit or_conclusion = or_multiplexer(or, m0, m1, m2);
    Bit nor_conclusion = nor_multiplexer(nor, m0, m1, m2);
    Bit xor_conclusion = xor_multiplexer(xor, m0, m1, m2);
    Bit xnor_conclusion = xnor_multiplexer(xnor, m0, m1, m2);

    Bit conclusion = _or(_or(_or(and_conclusion, nand_conclusion),
                             _or(or_conclusion, nor_conclusion)),
                         _or(_or(or_conclusion, nor_conclusion),
                             _or(xor_conclusion, xnor_conclusion)));
    return conclusion;
}

static Bit and_multiplexer(Bit and, Bit m0, Bit m1, Bit m2) {
    Bit mode = _and(_nor(m0, m1), _nor(m1, m2));
    Bit conclusion = _and(and, mode);
    return conclusion;
}

static Bit nand_multiplexer(Bit nand, Bit m0, Bit m1, Bit m2) {
    Bit conclusion = and_multiplexer(nand, m0, m1, _not(m2));
    return conclusion;
}

static Bit or_multiplexer(Bit or, Bit m0, Bit m1, Bit m2) {
    Bit mode = _and(_nor(m0, m2), m1);
    Bit conclusion = _and(or, mode);
    return conclusion;
}

static Bit nor_multiplexer(Bit nor, Bit m0, Bit m1, Bit m2) {
    Bit conclusion = or_multiplexer(nor, _not(m0), _not(m1), m2);
    return conclusion;
}

static Bit xnor_multiplexer(Bit xnor, Bit m0, Bit m1, Bit m2) {
    Bit mode = _and(_and(m0, m1), _and(m1, m2));
    Bit conclusion = _and(xnor, mode);
    return conclusion;
}

static Bit xor_multiplexer(Bit xor, Bit m0, Bit m1, Bit m2) {
    Bit conclusion = xnor_multiplexer(xor, m0, m1, _not(m2));
    return conclusion;
}
