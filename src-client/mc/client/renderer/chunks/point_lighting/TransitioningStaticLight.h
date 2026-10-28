#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"

namespace PointLighting::Detail {

struct TransitioningStaticLight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Brightness> mCurrentEmission;
    ::ll::TypedStorage<1, 1, ::Brightness> mNextEmission;
    ::ll::TypedStorage<1, 1, ::Brightness> mTargetEmission;
    ::ll::TypedStorage<1, 1, ::Brightness> mBaseEmission;
    ::ll::TypedStorage<1, 1, bool>         mGated;
    // NOLINTEND
};

} // namespace PointLighting::Detail
