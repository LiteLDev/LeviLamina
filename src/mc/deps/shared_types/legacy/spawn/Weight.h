#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct Weight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWeight;
    ::ll::TypedStorage<4, 4, int> mRarity;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
