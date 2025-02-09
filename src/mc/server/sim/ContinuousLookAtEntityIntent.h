#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

namespace sim {

struct ContinuousLookAtEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntity;
    ::ll::TypedStorage<1, 1, bool>             mStopOnMove;
    // NOLINTEND
};

} // namespace sim
