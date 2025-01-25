#include <iostream>

#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>
#include <cstdlib>

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
