#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockRenderLayer : uchar {
    RenderlayerDoubleSided                                  = 0,
    RenderlayerRayTracedWater                               = 1,
    RenderlayerDeferredWater                                = 2,
    RenderlayerBlend                                        = 3,
    RenderlayerBlendToOpaque                                = 4,
    RenderlayerOpaque                                       = 5,
    RenderlayerLightSource                                  = 6,
    RenderlayerAlphatestToOpaque                            = 7,
    RenderlayerAlphatest                                    = 8,
    RenderlayerSeasonsOpaque                                = 9,
    RenderlayerSeasonsAlphatestToOpaque                     = 10,
    RenderlayerAlphatestSingleSide                          = 11,
    RenderlayerAlphatestSingleSideToOpaque                  = 12,
    RenderlayerEndportal                                    = 13,
    RenderlayerBarrier                                      = 14,
    RenderlayerLight                                        = 15,
    RenderlayerStructureVoid                                = 16,
    RenderlayerShiftOpaqueInternalOnly                      = 17,
    RenderlayerShiftAlphatestToOpaqueInternalOnly           = 18,
    RenderlayerShiftAlphatestInternalOnly                   = 19,
    RenderlayerShiftAlphatestSingleSideInternalOnly         = 20,
    RenderlayerShiftAlphatestSingleSideToOpaqueInternalOnly = 21,
    RenderlayerCount                                        = 22,
};
