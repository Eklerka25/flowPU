#include <iostream>

#include <macros.hpp>

#include <fasm/asm_llc.hpp>
#include <fasm/asm_vmemory.hpp>
#include <utils/fpu_charmap.hpp>

int cursor_pos_x = 0;
int cursor_pos_y = 0;

void fconsole_refresh() {
    llc_vmode_clear();
    int a = 0;
    for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 4; y++) {
            write << charmap_return(vmem_read(a, 0));
            a++;
        }
        write << "\n";
    }
}

void fconsole_write(int x, int y, int index) {
    vmem_write(x, index, 0b0);
}

void fconsole_printchar(int index) {
    vmem_write(cursor_pos_x, index, 0b0);
    cursor_pos_x++;
    vmem_write(cursor_pos_x, 24, 0b0);
}
