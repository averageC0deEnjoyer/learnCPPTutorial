
// compile error
// #include "add.h" in add.h everything is int
// int add(int x, double y) { return x + y; }

#include "add.h"
int add(int x, int y) { return x + y; }
