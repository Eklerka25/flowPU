#pragma once

#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>

extern void vmem_init(i8 value);
extern int vmem_write(int index, i8 char_value, i8 color_value);
extern int16_t vmem_read(int index, int btype);
extern void vmem_dump();
