#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Analysis {

struct EntityIterAndTotalCost {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk827a51;
    ::ll::UntypedStorage<8, 8>  mUnkd9ad02;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityIterAndTotalCost& operator=(EntityIterAndTotalCost const&);
    EntityIterAndTotalCost(EntityIterAndTotalCost const&);
    EntityIterAndTotalCost();
};

} // namespace ECS::Profiling::Analysis
