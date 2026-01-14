#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct HeightFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMin;
    ::ll::TypedStorage<4, 4, int> mMax;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
