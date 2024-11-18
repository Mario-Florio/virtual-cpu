#ifndef virtualcpu_components_alu_fourbitfulladdersubtractor_h
#define virtualcpu_components_alu_fourbitfulladdersubtractor_h

#include "../../../common.h"

Bit* fourbit_fulladdersubtractor(Bit a0, Bit a1, Bit a2, Bit a3,
                                 Bit b0, Bit b1, Bit b2, Bit b3,
                                 Bit cin, Bit sub, Bit* output);

#endif