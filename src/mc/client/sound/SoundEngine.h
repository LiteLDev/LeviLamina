#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundEngine {
public:
    // prevent constructor by default
    SoundEngine& operator=(SoundEngine const&);
    SoundEngine(SoundEngine const&);
    SoundEngine();
};
