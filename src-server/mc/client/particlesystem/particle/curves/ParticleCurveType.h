#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ParticleSystem {

enum class ParticleCurveType : int {
    Invalid     = -1,
    Linear      = 0,
    Bezier      = 1,
    CatmullRom  = 2,
    BezierChain = 3,
};

}
