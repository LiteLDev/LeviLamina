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
    MCNAPI bool operator!=(::mce::Color const& c) const;
#endif

    MCNAPI bool operator==(::mce::Color const& c) const;

#ifdef LL_PLAT_C
    MCAPI int toARGB() const;

    MCNAPI ::std::string toHexString() const;

    MCNAPI ::std::string toRGBAHexString() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::Color fromHexString(::std::string const& hexStr);

    MCNAPI static ::mce::Color fromRGBHexString(::std::string const& hexStr);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& BLACK();

    MCAPI static ::mce::Color const& BLUE();

#ifdef LL_PLAT_C
    MCNAPI static ::mce::Color const& CYAN();
#endif

    MCAPI static ::mce::Color const& GREEN();

#ifdef LL_PLAT_C
    MCNAPI static ::mce::Color const& GREY();
#endif

    MCNAPI static ::mce::Color const& NIL();

#ifdef LL_PLAT_C
    MCNAPI static ::mce::Color const& ORANGE();

    MCNAPI static ::mce::Color const& PARTY_BLUE();

    MCNAPI static ::mce::Color const& PINK();
#endif

    MCAPI static ::mce::Color const& PURPLE();

#ifdef LL_PLAT_C
    MCNAPI static ::mce::Color const& REBECCA_PURPLE();
#endif

    MCAPI static ::mce::Color const& RED();

    MCAPI static ::mce::Color const& WHITE();

    MCAPI static ::mce::Color const& YELLOW();
    // NOLINTEND
};

} // namespace mce
