#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SuspendPlayerSave {
public:
    // prevent constructor by default
    SuspendPlayerSave& operator=(SuspendPlayerSave const&);
    SuspendPlayerSave(SuspendPlayerSave const&);
    SuspendPlayerSave();
};
