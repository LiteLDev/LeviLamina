#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScanForDolphin {

public:
    // prevent constructor by default
    ScanForDolphin& operator=(ScanForDolphin const&) = delete;
    ScanForDolphin(ScanForDolphin const&)            = delete;
    ScanForDolphin()                                 = delete;
};
