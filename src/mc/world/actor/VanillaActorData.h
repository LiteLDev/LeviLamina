#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaActorData {

public:
    // prevent constructor by default
    VanillaActorData& operator=(VanillaActorData const&) = delete;
    VanillaActorData(VanillaActorData const&)            = delete;
    VanillaActorData()                                   = delete;
};
