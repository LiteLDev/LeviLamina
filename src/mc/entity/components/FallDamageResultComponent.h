#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct FallDamageResultComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>   mFallDistance;
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    // NOLINTEND
};
