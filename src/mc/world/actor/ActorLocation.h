#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorLocation : int {
    Feet              = 0,
    Body              = 1,
    WeaponAttachPoint = 2,
    Head              = 3,
    DropAttachPoint   = 4,
    ExplosionPoint    = 5,
    Eyes              = 6,
    BreathingPoint    = 7,
    Mouth             = 8,
    Count             = 9,
};
