#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideBlockData {

public:
    // prevent constructor by default
    InsideBlockData& operator=(InsideBlockData const&) = delete;
    InsideBlockData(InsideBlockData const&)            = delete;
    InsideBlockData()                                  = delete;
};
