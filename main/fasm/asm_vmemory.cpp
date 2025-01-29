#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>

#define VMEM_SIZE 32000

i8 vmem[VMEM_SIZE][2];

void vmem_init(i8 value) {
    for (int x = 0; x < VMEM_SIZE; x++) {
        vmem[x][0] = value;
        vmem[x][1] = value;
    }
}

int vmem_write(int index, i8 char_value, i8 color_value) {
    if (index < VMEM_SIZE && index >= 0) {
        vmem[index][0] = char_value; 
        vmem[index][1] = color_value; 
    }
}

i8 vmem_read(int index, int btype) {
    return vmem[index][btype];
}

void vmem_dump() {
    for (int x = 0; x < VMEM_SIZE; x++) {
        vmem[x][0] = 0b00000000;
        vmem[x][1] = 0b00000000;
    }
}
