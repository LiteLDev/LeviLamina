#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GraphicsOverrideParameterType : uchar {
    SkyZenithColor       = 0,
    SkyHorizonColor      = 1,
    HorizonBlendMin      = 2,
    HorizonBlendMax      = 3,
    HorizonBlendStart    = 4,
    HorizonBlendMieStart = 5,
    RayleighStrength     = 6,
    SunMieStrength       = 7,
    MoonMieStrength      = 8,
    SunGlareShape        = 9,
};
