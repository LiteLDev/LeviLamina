#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PandaFlag {
public:
    // prevent constructor by default
    PandaFlag& operator=(PandaFlag const&);
    PandaFlag(PandaFlag const&);
    PandaFlag();
};
