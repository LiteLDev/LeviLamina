#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkipNormalTick {
public:
    // prevent constructor by default
    SkipNormalTick& operator=(SkipNormalTick const&);
    SkipNormalTick(SkipNormalTick const&);
    SkipNormalTick();
};
