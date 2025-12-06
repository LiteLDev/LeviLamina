#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct DistanceSortedActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*> mActor;
    ::ll::TypedStorage<4, 4, float>    mDistanceSquared;
    // NOLINTEND
};
