#include "../../logic-gates/logic-gates.h"

char* shifter(char a, char cin, char div, char* output) { 
    char bout = _and(div, a);
    char res0 = _and(div, cin);
    char res1 = _and(a, _xor(div, a));
    char cout = _and(cin, _xor(div, cin));

    output[0] = bout, output[1] = res0, output[2] = res1, output[3] = cout;

    return output;
}
