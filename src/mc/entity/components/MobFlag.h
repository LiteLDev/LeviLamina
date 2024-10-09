#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobFlag {
public:
    // prevent constructor by default
    MobFlag& operator=(MobFlag const&);
    MobFlag(MobFlag const&);
    MobFlag();
};
