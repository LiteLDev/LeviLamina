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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PaletteColor fromByte(uchar id);

    MCAPI static ::mce::Color const& getColor(::PaletteColor id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& BLACK();

    MCAPI static ::mce::Color const& BLUE();

    MCAPI static ::mce::Color const& BROWN();

    MCAPI static ::mce::Color const& CYAN();

    MCAPI static ::mce::Color const& GRAY();

    MCAPI static ::mce::Color const& GREEN();

    MCAPI static ::mce::Color const& LIGHT_BLUE();

    MCAPI static ::mce::Color const& LIGHT_GREEN();

    MCAPI static ::mce::Color const& MAGENTA();

    MCAPI static ::mce::Color const& ORANGE();

    MCAPI static ::mce::Color const& PINK();

    MCAPI static ::mce::Color const& PURPLE();

    MCAPI static ::mce::Color const& RED();

    MCAPI static ::mce::Color const& SILVER();

    MCAPI static ::mce::Color const& WHITE();

    MCAPI static ::mce::Color const& YELLOW();
    // NOLINTEND
};
