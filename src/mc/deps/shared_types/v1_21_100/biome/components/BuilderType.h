#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

enum class BuilderType : uchar {
    OverworldSurfaceSettings   = 0,
    FrozenOceanSurfaceSettings = 1,
    MesaSurfaceSettings        = 2,
    SwampSurfaceSettings       = 3,
    CappedSurfaceSettings      = 4,
    TheEndSurfaceSettings      = 5,
};

}
