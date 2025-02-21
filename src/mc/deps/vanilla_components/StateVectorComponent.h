#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct StateVectorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosPrev;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosDelta;
    // NOLINTEND
};
