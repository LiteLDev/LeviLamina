#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MineshaftData {

public:
    // prevent constructor by default
    MineshaftData& operator=(MineshaftData const&) = delete;
    MineshaftData(MineshaftData const&)            = delete;
    MineshaftData()                                = delete;
};
