#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Particle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLE
public:
    Particle& operator=(Particle const&) = delete;
    Particle(Particle const&)            = delete;
    Particle()                           = delete;
#endif

public:
};
