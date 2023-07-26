#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkipNormalTick {

public:
    // prevent constructor by default
    SkipNormalTick& operator=(SkipNormalTick const&) = delete;
    SkipNormalTick(SkipNormalTick const&)            = delete;
    SkipNormalTick()                                 = delete;
};
