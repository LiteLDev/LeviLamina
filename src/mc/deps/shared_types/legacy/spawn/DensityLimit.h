#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct DensityLimit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk435749;
    ::ll::UntypedStorage<4, 4> mUnkd59e59;
    // NOLINTEND

public:
    // prevent constructor by default
    DensityLimit& operator=(DensityLimit const&);
    DensityLimit(DensityLimit const&);
    DensityLimit();
};

} // namespace SharedTypes::Legacy::Spawn
