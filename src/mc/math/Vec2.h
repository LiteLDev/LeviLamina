#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec2 : public ll::math::floatN2<Vec2> {
public:
    using floatN2::floatN2;

public:
    // NOLINTBEGIN
    MCAPI class Vec2 normalized() const;

    MCAPI std::string toJsonString() const;

    MCAPI std::string toString() const;

    MCAPI static class Vec2 rotate(class Vec2 const& v, float);

    MCAPI static class Vec2 const LOWEST;

    MCAPI static class Vec2 const MAX;

    MCAPI static class Vec2 const MIN;

    MCAPI static class Vec2 const NEG_UNIT_X;

    MCAPI static class Vec2 const NEG_UNIT_Y;

    MCAPI static class Vec2 const ONE;

    MCAPI static class Vec2 const UNIT_X;

    MCAPI static class Vec2 const UNIT_Y;

    MCAPI static class Vec2 const ZERO;

    // NOLINTEND
};
