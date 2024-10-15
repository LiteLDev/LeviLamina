#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Color {
public:
    // prevent constructor by default
    Color& operator=(Color const&);
    Color(Color const&);
    Color();

public:
    // NOLINTBEGIN
    MCAPI Color(float, float, float, float);

    MCAPI bool operator==(class mce::Color const& c) const;

    MCAPI int toABGR() const;

    MCAPI int toARGB() const;

    MCAPI std::string toHexString() const;

    MCAPI static class mce::Color fromHexString(std::string const& hexStr);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(float, float, float, float);

    MCAPI static class mce::Color const& BLACK();

    MCAPI static class mce::Color const& BLUE();

    MCAPI static class mce::Color const& CYAN();

    MCAPI static class mce::Color const& GREEN();

    MCAPI static class mce::Color const& GREY();

    MCAPI static class mce::Color const& MINECOIN_GOLD();

    MCAPI static class mce::Color const& NIL();

    MCAPI static class mce::Color const& ORANGE();

    MCAPI static class mce::Color const& PINK();

    MCAPI static class mce::Color const& PURPLE();

    MCAPI static class mce::Color const& REBECCA_PURPLE();

    MCAPI static class mce::Color const& RED();

    MCAPI static class mce::Color const& SHADE_DOWN();

    MCAPI static class mce::Color const& SHADE_NORTH_SOUTH();

    MCAPI static class mce::Color const& SHADE_UP();

    MCAPI static class mce::Color const& SHADE_WEST_EAST();

    MCAPI static class mce::Color const& WHITE();

    MCAPI static class mce::Color const& YELLOW();

    // NOLINTEND
};

}; // namespace mce
