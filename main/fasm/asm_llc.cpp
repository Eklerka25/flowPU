#include <iostream>
#include <conio.h>

#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>
#include <cstdlib>

#include <utils/fpu_charmap.hpp>

void llc_halt() {
    while (1) {}
}

void llc_exit() {
    system("exit");
}

void llc_pause() {
    system("pause > nul");
}

void llc_vmode_clear() {
    system("cls");
}

int llc_getchar() {
    return fsvm_charmap_return_index(getch());
}
