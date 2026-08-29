#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PartVisibilityBoneSlice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                       mPartVisibilityIndex;
    ::ll::TypedStorage<4, 4, uint>                       mBoneOffset;
    ::ll::TypedStorage<8, 16, ::gsl::span<ushort const>> mPartVisibilityOffsets;
    // NOLINTEND
};
