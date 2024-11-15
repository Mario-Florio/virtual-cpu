
char _buffer(char on) {
    return on;
}

char _not(char on) {
    return !on;
}

char _or(char a, char b) {
    return a || b;
}

char _xor(char a, char b) {
    return a ^ b;
}

char _nor(char a, char b) {
    return !(a || b);
}

char _xnor(char a, char b) {
    return !(a ^ b);
}

char _and(char a, char b) {
    return a && b;
}

char _nand(char a, char b) {
    return !(a && b);
}
