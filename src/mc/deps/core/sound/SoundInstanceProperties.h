#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundInstanceProperties {

public:
    // prevent constructor by default
    SoundInstanceProperties& operator=(SoundInstanceProperties const&) = delete;
    SoundInstanceProperties(SoundInstanceProperties const&)            = delete;
    SoundInstanceProperties()                                          = delete;
};
