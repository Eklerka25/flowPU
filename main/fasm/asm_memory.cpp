#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>

#include <fasm/asm_math.hpp>

i16 mem[8] = {
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
};

int mem_write(int index, i16 value) {
    if (index < 8 && index >= 0) { mem[index] = value; }
}

i16 mem_read(int index) {
    return mem[index];
}

void mem_dump() {
    for (int x = 0; x < 8; x++) {
        mem[x] = 0b0000000000000000;
    }
}
