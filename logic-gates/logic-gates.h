#ifndef virtualcpu_logicgates_h
#define virtualcpu_logicgates_h

#include "../common.h"

Bit _buffer(Bit on);
Bit _not(Bit on);
Bit _or(Bit a, Bit b);
Bit _nor(Bit a, Bit b);
Bit _xor(Bit a, Bit b);
Bit _xnor(Bit a, Bit b);
Bit _and(Bit a, Bit b);
Bit _nand(Bit a, Bit b);

#endif