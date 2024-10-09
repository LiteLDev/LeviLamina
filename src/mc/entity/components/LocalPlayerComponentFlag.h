#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayerComponentFlag {
public:
    // prevent constructor by default
    LocalPlayerComponentFlag& operator=(LocalPlayerComponentFlag const&);
    LocalPlayerComponentFlag(LocalPlayerComponentFlag const&);
    LocalPlayerComponentFlag();
};
