#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceLocationPair {

public:
    // prevent constructor by default
    ResourceLocationPair& operator=(ResourceLocationPair const&) = delete;
    ResourceLocationPair(ResourceLocationPair const&)            = delete;
    ResourceLocationPair()                                       = delete;
};
