#pragma once

#include <iostream>

#include <macros.hpp>

#include <fasm/asm_vmemory.hpp>
#include <utils/fpu_charmap.hpp>

void fconsole_refresh();
void fconsole_write(int x, int y, int index);
void fconsole_printchar(int index, int color);