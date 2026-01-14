#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct WorldAgeFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mMin;
    ::ll::TypedStorage<8, 8, uint64> mMax;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
