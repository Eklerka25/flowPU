#include <cstdint>
#include <macros.hpp>

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

int write_mem(int index, int16_t value) {
    if (index < 8 && index >= 0) { mem[index] = value; }
}

int16_t read_mem(int index) {
    return mem[index];
}

void dump_mem() {
    for (int x = 0; x < 8; x++) {
        mem[x] = 0b0000000000000000;
    }
}
