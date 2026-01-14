#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct PlayerInVillageFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mDistance;
    ::ll::TypedStorage<4, 4, uint> mTolerance;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
