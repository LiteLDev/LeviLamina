#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Particle {

public:
    // prevent constructor by default
    Particle& operator=(Particle const&) = delete;
    Particle(Particle const&)            = delete;
    Particle()                           = delete;
};
