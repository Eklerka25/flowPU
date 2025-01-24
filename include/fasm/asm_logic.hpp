#pragma once

#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>

#include <fasm/asm_mem.hpp>

int logic_and(i16 i, i16 j);
int logic_or(i16 i, i16 j);
int logic_not(i16 i);
int logic_nand(i16 i, i16 j);
int logic_nor(i16 i, i16 j);
