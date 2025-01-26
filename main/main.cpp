#include <iostream>
#include <cstdint>

#include <fasm/asm_vmemory.hpp>
#include <fasm/asm_mem.hpp>
#include <fasm/asm_math.hpp>
#include <fasm/asm_logic.hpp>
#include <fasm/asm_llc.hpp>

#include <fconsole/fconsole.hpp>

int main() {
    mem_init(0b0000000000000000);
    vmem_init(0b11111111);
    system("title FlowPU emulator");
    system("MODE CON:cols=80 lines=25");

    while (true) { 
        fconsole_printchar(74, 91);
        fconsole_printchar(45, 91);
        fconsole_printchar(52, 91);
        fconsole_printchar(52, 91);
        fconsole_printchar(55, 91);
        fconsole_printchar(27, 91); 
        fconsole_printchar(0, 91);
        fconsole_printchar(63, 91);
        fconsole_printchar(55, 91);
        fconsole_printchar(58, 91);
        fconsole_printchar(52, 91);
        fconsole_printchar(44, 91);
        fconsole_printchar(12, 91);

        fconsole_refresh();
        llc_pause();
    }
}

