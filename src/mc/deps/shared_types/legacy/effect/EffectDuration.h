#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

struct EffectDuration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTicks;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
