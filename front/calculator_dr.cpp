#include <emscripten.h>
#include <stdio.h>

EMSCRIPTEN_KEEPALIVE
float calculate(float exp) {
    return exp;
}
