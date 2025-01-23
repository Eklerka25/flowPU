#include <cstdint>
#include <macros.hpp>

#include <fasm/asm_math.hpp>

int16_t math_inc(int16_t value) {
    return value + 1;
}

int16_t math_add(int16_t adn, int16_t add) {
    return adn + add;
}

int16_t math_sub(int16_t min, int16_t sub) {
    return min - sub;
}

int16_t math_mlp(int16_t mld, int16_t mlr) {
    return mld * mlr;
}

int16_t math_div(int16_t dvr, int16_t did) {
    return did / dvr;
}
