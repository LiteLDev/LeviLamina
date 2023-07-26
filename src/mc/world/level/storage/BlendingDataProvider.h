#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlendingDataProvider {

public:
    // prevent constructor by default
    BlendingDataProvider& operator=(BlendingDataProvider const&) = delete;
    BlendingDataProvider(BlendingDataProvider const&)            = delete;
    BlendingDataProvider()                                       = delete;
};
