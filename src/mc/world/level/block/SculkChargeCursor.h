#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class SculkChargeCursor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<4, 4, int>         mCharge;
    ::ll::TypedStorage<4, 4, int>         mUpdateDelay;
    ::ll::TypedStorage<4, 4, int>         mDecayDelay;
    ::ll::TypedStorage<4, 4, int>         mFacingData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void load(::CompoundTag const& tag);

    MCAPI void save(::CompoundTag& tag) const;
    // NOLINTEND
};
