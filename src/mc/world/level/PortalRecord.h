#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class PortalRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBaseBlockPos;
    ::ll::TypedStorage<1, 1, schar>       mSpan;
    ::ll::TypedStorage<1, 1, schar>       mXInc;
    ::ll::TypedStorage<1, 1, schar>       mZInc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockPos closestBlockPosTo(::Actor const& entity) const;
    // NOLINTEND
};
