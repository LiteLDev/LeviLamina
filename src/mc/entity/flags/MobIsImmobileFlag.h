#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobIsImmobileFlag {

public:
    // prevent constructor by default
    MobIsImmobileFlag& operator=(MobIsImmobileFlag const&) = delete;
    MobIsImmobileFlag(MobIsImmobileFlag const&)            = delete;
    MobIsImmobileFlag()                                    = delete;
};
