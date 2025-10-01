#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

enum class DirectionalPlacementMode : int {
    IgnoreCamera    = 0,
    NormalCamera    = 1,
    OppositeCamera  = 2,
    CameraLeft      = 3,
    CameraRight     = 4,
    CameraFromAbove = 5,
    CameraFromBelow = 6,
    FrontFacePosX   = 7,
    FrontFaceNegX   = 8,
    FrontFacePosZ   = 9,
    FrontFaceNegZ   = 10,
    FrontFacePosY   = 11,
    FrontFaceNegY   = 12,
    Random2Axes     = 13,
    Random3Axes     = 14,
    StartRandom     = 7,
    LastRandom2Axes = 10,
    LastRandom3Axes = 12,
};

}
