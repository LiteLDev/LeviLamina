#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlendingConfig {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLENDINGCONFIG
public:
    BlendingConfig& operator=(BlendingConfig const&) = delete;
    BlendingConfig(BlendingConfig const&)            = delete;
    BlendingConfig()                                 = delete;
#endif

public:
};
