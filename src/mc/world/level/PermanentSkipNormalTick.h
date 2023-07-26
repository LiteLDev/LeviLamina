#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PermanentSkipNormalTick {

public:
    // prevent constructor by default
    PermanentSkipNormalTick& operator=(PermanentSkipNormalTick const&) = delete;
    PermanentSkipNormalTick(PermanentSkipNormalTick const&)            = delete;
    PermanentSkipNormalTick()                                          = delete;
};
