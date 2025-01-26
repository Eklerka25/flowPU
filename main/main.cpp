#include <iostream>
#include <cstdint>

#include <fasm/asm_vmemory.hpp>
#include <fasm/asm_mem.hpp>
#include <fasm/asm_math.hpp>
#include <fasm/asm_logic.hpp>
#include <fasm/asm_llc.hpp>

#include <fconsole/fconsole.hpp>
#include <utils/fpu_colormap.hpp>

int main() {
    mem_init(0b0000000000000000);
    vmem_init(0b11111111);
    system("title FlowPU emulator");
    system("MODE CON:cols=80 lines=25");

    while (true) { 
        fconsole_printchar(74, FG_MAGENTA);
        fconsole_printchar(45, FG_LIGHT_MAGENTA);
        fconsole_printchar(52, FG_MAGENTA);
        fconsole_printchar(52, FG_LIGHT_MAGENTA);
        fconsole_printchar(55, FG_MAGENTA);
        fconsole_printchar(27, FG_LIGHT_MAGENTA); 
        fconsole_printchar(00, FG_MAGENTA);
        fconsole_printchar(63, FG_LIGHT_MAGENTA);
        fconsole_printchar(55, FG_MAGENTA);
        fconsole_printchar(58, FG_LIGHT_MAGENTA);
        fconsole_printchar(52, FG_MAGENTA);
        fconsole_printchar(44, FG_LIGHT_MAGENTA);
        fconsole_printchar(12, FG_MAGENTA);

        fconsole_refresh();
        llc_pause();
    }
}

