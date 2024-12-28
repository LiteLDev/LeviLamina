#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TransformSpace : int {
    Invalid                         = 0,
    MinecraftAbsoluteSpace          = 1,
    MinecraftSteveRelativeSpace     = 2,
    MinecraftViewSpace              = 3,
    MinecraftProjSpace              = 4,
    UIPixelSpace                    = 5,
    UINormalizedSpace               = 6,
    HoloLivingRoomScreenAnchorSpace = 7,
    HoloUIAnchorSpace               = 8,
    HoloHeadlockedSpace             = 9,
    HoloAugmentedScreenAnchorSpace  = 10,
    HoloViewerAnchorSpace           = 11,
    HoloRealWorldAbsoluteSpace      = 12,
    HoloSRAnchorSpace               = 13,
    HoloRealityAnchorSpace          = 14,
    HoloPoseSpace                   = 15,
    HoloHeadGazeSpace               = 16,
    HoloLeftHandSpace               = 17,
    HoloRightHandSpace              = 18,
    HoloAimSpace                    = 19,
    HoloHeadCameraSpace             = 20,
    HoloLeftViewSpace               = 21,
    HoloRightViewSpace              = 22,
    HoloLeftProjSpace               = 23,
    HoloRightProjSpace              = 24,
    HoloLeftEarSpace                = 25,
    HoloRightEarSpace               = 26,
};
