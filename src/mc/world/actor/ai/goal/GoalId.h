#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GoalId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mTypeId;
    ::ll::TypedStorage<4, 4, uint>   mSuffixHash;
    // NOLINTEND
};
