#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec4 : public ll::math::floatN4<Vec4> {
public:
    using floatN4::floatN4;

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class Vec4 const& MAX();

    MCAPI static class Vec4 const& MIN();

    MCAPI static class Vec4 const& ONE();

    MCAPI static class Vec4 const& ZERO();

    // NOLINTEND
};
