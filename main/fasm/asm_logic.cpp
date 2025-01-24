#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>

#include <fasm/asm_math.hpp>
#include <fasm/asm_mem.hpp>

int logic_and(i16 i, i16 j) {
    if (i == 1 && j == 1) {
        return 1;
    } else {
        return 0;
    }
}

int logic_or(i16 i, i16 j) {
    if (i == 1 || j == 1) {
        return 1;
    } else {
        return 0;
    }
}

int logic_not(i16 i) {
    if (i == 1) {
        return 0;
    } else {
        return 1;
    }
}

int logic_nand(i16 i, i16 j) {
    if (i == 1 && j == 1) {
        return 0;
    } else {
        return 1;
    }
}

int logic_nor(i16 i, i16 j) {
    if (i == 1 || j == 1) {
        return 0;
    } else {
        return 1 ;
    }
}
