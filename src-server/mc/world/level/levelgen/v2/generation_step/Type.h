#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::GenerationStep {

enum class Type : uchar {
    RawGeneration = 0,
    Lakes = 1,
    LocalModifications = 2,
    UndergroundStructures = 3,
    SurfaceStructures = 4,
    Strongholds = 5,
    UndergroundOres = 6,
    UndergroundDecoration = 7,
    FluidSprings = 8,
    VegetalDecoration = 9,
    TopLayerModification = 10,
};

}
