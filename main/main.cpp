#include <iostream>
#include <cstdint>

#include <asm.hpp>

int main() {
    write_mem(0, 0b11);
    write << read_mem(0);
}
