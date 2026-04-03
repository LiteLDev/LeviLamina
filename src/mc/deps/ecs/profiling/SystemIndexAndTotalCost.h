#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Analysis {

struct SystemIndexAndTotalCost {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd949a7;
    ::ll::UntypedStorage<8, 8> mUnk67e935;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemIndexAndTotalCost& operator=(SystemIndexAndTotalCost const&);
    SystemIndexAndTotalCost(SystemIndexAndTotalCost const&);
    SystemIndexAndTotalCost();
};

} // namespace ECS::Profiling::Analysis
