#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockRenderLayer : uchar {
    RenderlayerDoubleSided                 = 0,
    RenderlayerRayTracedWater              = 1,
    RenderlayerDeferredWater               = 2,
    RenderlayerBlend                       = 3,
    RenderlayerOpaque                      = 4,
    RenderlayerLightSource                 = 5,
    RenderlayerOptionalAlphatest           = 6,
    RenderlayerAlphatest                   = 7,
    RenderlayerSeasonsOpaque               = 8,
    RenderlayerSeasonsOptionalAlphatest    = 9,
    RenderlayerAlphatestSingleSide         = 10,
    RenderlayerOptionalAlphatestSingleSide = 11,
    RenderlayerEndportal                   = 12,
    RenderlayerBarrier                     = 13,
    RenderlayerLight                       = 14,
    RenderlayerStructureVoid               = 15,
    RenderlayerCount                       = 16,
};
