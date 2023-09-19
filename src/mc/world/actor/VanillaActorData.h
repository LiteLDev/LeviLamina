#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaActorData {
public:
    // prevent constructor by default
    VanillaActorData& operator=(VanillaActorData const&);
    VanillaActorData(VanillaActorData const&);
    VanillaActorData();
};
