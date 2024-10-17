#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitherSkullFlag {
public:
    // prevent constructor by default
    WitherSkullFlag& operator=(WitherSkullFlag const&);
    WitherSkullFlag(WitherSkullFlag const&);
    WitherSkullFlag();
};
