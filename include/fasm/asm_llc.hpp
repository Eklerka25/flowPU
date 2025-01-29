#pragma once

#include <conio.h>
#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>

#include <utils/fpu_charmap.hpp>

void llc_halt();
void llc_exit();
void llc_pause();
void llc_vmode_clear();
int llc_getchar();
