#include "./logic-gates.h"

Bit _buffer(Bit on) {
    return on;
}

Bit _not(Bit on) {
    return !on;
}

Bit _or(Bit a, Bit b) {
    return a || b;
}

Bit _xor(Bit a, Bit b) {
    return a ^ b;
}

Bit _nor(Bit a, Bit b) {
    return !(a || b);
}

Bit _xnor(Bit a, Bit b) {
    return !(a ^ b);
}

Bit _and(Bit a, Bit b) {
    return a && b;
}

Bit _nand(Bit a, Bit b) {
    return !(a && b);
}
