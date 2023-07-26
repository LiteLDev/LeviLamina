#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlendingConfig {

public:
    // prevent constructor by default
    BlendingConfig& operator=(BlendingConfig const&) = delete;
    BlendingConfig(BlendingConfig const&)            = delete;
    BlendingConfig()                                 = delete;
};
