#include <cstdint>
#include <macros.hpp>

#include <fasm/asm_math.hpp>

int16_t mem[8] = {
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
    0b0000000000000000,
};

int mem_write(int index, int16_t value) {
    if (index < 8 && index >= 0) { mem[index] = value; }
}

int16_t mem_read(int index) {
    return mem[index];
}

void mem_dump() {
    for (int x = 0; x < 8; x++) {
        mem[x] = 0b0000000000000000;
    }
}
