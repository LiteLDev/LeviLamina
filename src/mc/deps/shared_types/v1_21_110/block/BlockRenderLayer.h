#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

enum class BlockRenderLayer : uchar {
    DoubleSided                 = 0,
    RayTraced                   = 1,
    DeferredWater               = 2,
    Blend                       = 3,
    BlendToOpaque               = 4,
    Opaque                      = 5,
    LightSource                 = 6,
    AlphatestToOpaque           = 7,
    Alphatest                   = 8,
    SeasonsOpaque               = 9,
    SeasonsAlphatestToOpaque    = 10,
    AlphatestSingleSide         = 11,
    AlphatestSingleSideToOpaque = 12,
    Endportal                   = 13,
    Barrier                     = 14,
    Light                       = 15,
    StructureVoid               = 16,
    Size                        = 17,
};

}
