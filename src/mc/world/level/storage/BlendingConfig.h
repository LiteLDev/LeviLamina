#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlendingConfig {
public:
    // prevent constructor by default
    BlendingConfig& operator=(BlendingConfig const&);
    BlendingConfig(BlendingConfig const&);
    BlendingConfig();
};
