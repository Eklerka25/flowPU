#include <cstdint>
#include <macros.hpp>
#include <typedefs.hpp>

#include <fasm/asm_math.hpp>

i16 math_inc(i16 value) {
    return value + 1;
}

i16 math_add(i16 adn, i16 add) {
    return adn + add;
}

i16 math_sub(i16 min, i16 sub) {
    return min - sub;
}

i16 math_mlp(i16 mld, i16 mlr) {
    return mld * mlr;
}

i16 math_div(i16 dvr, i16 did) {
    return did / dvr;
}

