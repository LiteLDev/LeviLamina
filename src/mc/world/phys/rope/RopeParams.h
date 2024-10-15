#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeParams {
public:
    // prevent constructor by default
    RopeParams& operator=(RopeParams const&);
    RopeParams(RopeParams const&);
    RopeParams();

public:
    // NOLINTBEGIN
    MCAPI RopeParams(class Vec3 const& startPin, class Vec3 const& endPin, float length);

    MCAPI void leadInit();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Vec3 const& startPin, class Vec3 const& endPin, float length);

    // NOLINTEND
};
