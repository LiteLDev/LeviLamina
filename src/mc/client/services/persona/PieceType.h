#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class PieceType : int {
    Unknown       = 0x0,
    Skeleton      = 0x1,
    Body          = 0x2,
    Skin          = 0x3,
    Bottom        = 0x4,
    Feet          = 0x5,
    Dress         = 0x6,
    Top           = 0x7,
    High_Pants    = 0x8,
    Hands         = 0x9,
    Outerwear     = 0xA,
    FacialHair    = 0xB,
    Mouth         = 0xC,
    Eyes          = 0xD,
    Hair          = 0xE,
    Hood          = 0xF,
    Back          = 0x10,
    FaceAccessory = 0x11,
    Head          = 0x12,
    Legs          = 0x13,
    LeftLeg       = 0x14,
    RightLeg      = 0x15,
    Arms          = 0x16,
    LeftArm       = 0x17,
    RightArm      = 0x18,
    Capes         = 0x19,
    ClassicSkin   = 0x1A,
    Emote         = 0x1B,
    Unsupported   = 0x1C,
    Count         = 0x1D,
};
};
