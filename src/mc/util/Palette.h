#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/PaletteColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Palette {
public:
    // prevent constructor by default
    Palette& operator=(Palette const&);
    Palette(Palette const&);
    Palette();

public:
    // NOLINTBEGIN
    MCAPI static ::PaletteColor fromByte(uchar id);

    MCAPI static class mce::Color const& getColor(::PaletteColor id);

    MCAPI static class mce::Color const BLACK;

    MCAPI static class mce::Color const BLUE;

    MCAPI static class mce::Color const BROWN;

    MCAPI static class mce::Color const CYAN;

    MCAPI static class mce::Color const GRAY;

    MCAPI static class mce::Color const GREEN;

    MCAPI static class mce::Color const LIGHT_BLUE;

    MCAPI static class mce::Color const LIGHT_GREEN;

    MCAPI static class mce::Color const MAGENTA;

    MCAPI static class mce::Color const ORANGE;

    MCAPI static class mce::Color const PINK;

    MCAPI static class mce::Color const PURPLE;

    MCAPI static class mce::Color const RED;

    MCAPI static class mce::Color const SILVER;

    MCAPI static class mce::Color const WHITE;

    MCAPI static class mce::Color const YELLOW;

    // NOLINTEND
};
