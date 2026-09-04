#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class PerfContextTrackerDataGatherer {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void _gatherActorCount(::EntityRegistry& registry);

    MCNAPI static void _gatherPlayerCount(::EntityRegistry& registry);
#endif
    // NOLINTEND
};
