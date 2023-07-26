#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntityRegistryRefTraits {

public:
    // prevent constructor by default
    EntityRegistryRefTraits& operator=(EntityRegistryRefTraits const&) = delete;
    EntityRegistryRefTraits(EntityRegistryRefTraits const&)            = delete;
    EntityRegistryRefTraits()                                          = delete;
};
