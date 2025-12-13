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
    MCAPI Color();

    MCAPI_C Color(::glm::vec3 const& color, float a_);

    MCAPI_C Color(::mce::Color const& color, float a_);

    MCAPI Color(float r_, float g_, float b_, float a_);

    MCAPI_C bool isNan() const;

    MCAPI bool operator!=(::mce::Color const& c) const;

    MCAPI_C ::mce::Color& operator*=(float s);

    MCAPI bool operator==(::mce::Color const& c) const;

    MCAPI_C int toARGB() const;

    MCAPI ::std::string toHexString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::mce::Color fromARGB(int col);

    MCAPI_C static ::mce::Color fromHSB(float hue, float saturation, float brightness);

    MCAPI static ::mce::Color fromHexString(::std::string const& hexStr);

    MCAPI static ::mce::Color fromRGBHexString(::std::string const& hexStr);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& BLACK();

    MCAPI static ::mce::Color const& BLUE();

    MCAPI_C static ::mce::Color const& CYAN();

    MCAPI static ::mce::Color const& GREEN();

    MCAPI_C static ::mce::Color const& GREY();

    MCAPI static ::mce::Color const& NIL();

    MCAPI_C static ::mce::Color const& ORANGE();

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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI_C void* $ctor(::glm::vec3 const& color, float a_);

    MCFOLD_C void* $ctor(::mce::Color const& color, float a_);

    MCFOLD void* $ctor(float r_, float g_, float b_, float a_);
    // NOLINTEND
};

} // namespace mce
