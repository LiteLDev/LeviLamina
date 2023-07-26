#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PandaFlag {

public:
    // prevent constructor by default
    PandaFlag& operator=(PandaFlag const&) = delete;
    PandaFlag(PandaFlag const&)            = delete;
    PandaFlag()                            = delete;
};
