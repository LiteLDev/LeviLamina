#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundInstanceProperties {
public:
    // prevent constructor by default
    SoundInstanceProperties& operator=(SoundInstanceProperties const&);
    SoundInstanceProperties(SoundInstanceProperties const&);
    SoundInstanceProperties();
};
