#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideBlockData {
public:
    // prevent constructor by default
    InsideBlockData& operator=(InsideBlockData const&);
    InsideBlockData(InsideBlockData const&);
    InsideBlockData();
};
