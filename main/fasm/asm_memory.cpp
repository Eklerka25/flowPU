#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>

#define MEM_SIZE 8192

i16 mem[MEM_SIZE];

void mem_init(i16 value) {
    for (int x = 0; x < MEM_SIZE; x++) {
        mem[x] = value;
    }
}

int mem_write(int index, i16 value) {
    if (index < MEM_SIZE && index >= 0) { mem[index] = value; }
}

i16 mem_read(int index) {
    return mem[index];
}

void mem_dump() {
    for (int x = 0; x < MEM_SIZE; x++) {
        mem[x] = 0b0000000000000000;
    }
}
