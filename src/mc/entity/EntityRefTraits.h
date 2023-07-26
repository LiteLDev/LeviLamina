#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntityRefTraits {

public:
    // prevent constructor by default
    EntityRefTraits& operator=(EntityRefTraits const&) = delete;
    EntityRefTraits(EntityRefTraits const&)            = delete;
    EntityRefTraits()                                  = delete;
};
