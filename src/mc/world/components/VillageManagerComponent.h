#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VillageManagerComponent {

public:
    // prevent constructor by default
    VillageManagerComponent& operator=(VillageManagerComponent const&) = delete;
    VillageManagerComponent(VillageManagerComponent const&)            = delete;
    VillageManagerComponent()                                          = delete;
};
