#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntityRegistryConstRefTraits {

public:
    // prevent constructor by default
    EntityRegistryConstRefTraits& operator=(EntityRegistryConstRefTraits const&) = delete;
    EntityRegistryConstRefTraits(EntityRegistryConstRefTraits const&)            = delete;
    EntityRegistryConstRefTraits()                                               = delete;
};
