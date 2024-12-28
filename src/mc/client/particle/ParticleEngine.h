#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticleEngine {
public:
    // prevent constructor by default
    ParticleEngine& operator=(ParticleEngine const&);
    ParticleEngine(ParticleEngine const&);
    ParticleEngine();
};
