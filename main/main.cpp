#include <iostream>
#include <cstdint>

#include <fasm/asm_mem.hpp>
#include <fasm/asm_math.hpp>
#include <fasm/asm_logic.hpp>

int main() {
    mem_write(0, math_inc(0b11));
    write << mem_read(0);
}
