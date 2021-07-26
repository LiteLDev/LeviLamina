#pragma once

#include <string>

#include "../dll.h"

class Color {
public:
    float r{}, g{}, b{}, a{};

    inline Color(float r, float g, float b, float a)
        : r(r)
        , g(g)
        , b(b)
        , a(a) {
    }
    inline Color() {
    }

    MCAPI bool operator==(Color const&) const;

    MCAPI static Color fromARGB(int);
    MCAPI static Color fromHexString(std::string const&);
    MCAPI int          toARGB() const;
    MCAPI std::string toHexString() const;

    MCAPI static Color NIL, WHITE, PURPLE, YELLOW, RED, BLACK, MINECON_GOLD, SHADE_WEST_EAST, SHADE_NORTH_SOUTH, SHADE_UP,
        SHADE_DOWN, PINK, CYAN, ORANGE, BLUE, GREEN, GREY;
};