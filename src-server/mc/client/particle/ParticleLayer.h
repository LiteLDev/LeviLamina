#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ParticleLayer : int {
    Opaque      = 0,
    AlphaTested = 1,
    Blend       = 2,
    Invisible   = 3,
    Count       = 4,
};
