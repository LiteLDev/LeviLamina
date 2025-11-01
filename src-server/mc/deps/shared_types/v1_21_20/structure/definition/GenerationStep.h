#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

enum class GenerationStep : uchar {
    RawGeneration         = 0,
    Lakes                 = 1,
    LocalModifications    = 2,
    UndergroundStructures = 3,
    SurfaceStructures     = 4,
    Strongholds           = 5,
    UndergroundOres       = 6,
    UndergroundDecoration = 7,
    FluidSprings          = 8,
    VegetalDecoration     = 9,
    TopLayerModification  = 10,
};

}
