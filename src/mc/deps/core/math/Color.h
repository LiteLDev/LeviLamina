#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Color {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> r;
    ::ll::TypedStorage<4, 4, float> g;
    ::ll::TypedStorage<4, 4, float> b;
    ::ll::TypedStorage<4, 4, float> a;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool isNan() const;

    MCAPI bool operator<(::mce::Color const& c) const;
#endif

    MCAPI bool operator==(::mce::Color const& c) const;

    MCAPI int toABGR() const;

    MCAPI int toARGB() const;

    MCAPI ::std::string toHexString() const;

    MCAPI ::glm::vec3 toVec3() const;

#ifdef LL_PLAT_C
    MCFOLD ::glm::vec4 toVec4() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::mce::Color fromHSB(float hue, float saturation, float brightness);
#endif

    MCAPI static ::mce::Color fromHexString(::std::string const& hexStr);

    MCAPI static ::mce::Color fromRGBHexString(::std::string const& hexStr);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& BLACK();

    MCAPI static ::mce::Color const& BLUE();

    MCAPI static ::mce::Color const& CYAN();

    MCAPI static ::mce::Color const& GREEN();

    MCAPI static ::mce::Color const& GREY();

    MCAPI static ::mce::Color const& NIL();

    MCAPI static ::mce::Color const& ORANGE();

    MCAPI static ::mce::Color const& PINK();

    MCAPI static ::mce::Color const& PURPLE();

    MCAPI static ::mce::Color const& REBECCA_PURPLE();

    MCAPI static ::mce::Color const& RED();

    MCAPI static ::mce::Color const& SHADE_DOWN();

    MCAPI static ::mce::Color const& SHADE_NORTH_SOUTH();

    MCAPI static ::mce::Color const& SHADE_UP();

    MCAPI static ::mce::Color const& SHADE_WEST_EAST();

    MCAPI static ::mce::Color const& WHITE();

    MCAPI static ::mce::Color const& YELLOW();
    // NOLINTEND
};

} // namespace mce
