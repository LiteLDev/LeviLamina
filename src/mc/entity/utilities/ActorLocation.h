#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorLocation : int {
    Feet              = 0x0,
    Body              = 0x1,
    WeaponAttachPoint = 0x2,
    Head              = 0x3,
    DropAttachPoint   = 0x4,
    ExplosionPoint    = 0x5,
    Eyes              = 0x6,
    BreathingPoint    = 0x7,
    Mouth             = 0x8,
    Count             = 0x9,
};
