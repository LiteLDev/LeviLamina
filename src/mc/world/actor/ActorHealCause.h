#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorHealCause : uchar {
    None         = 0,
    Regeneration = 1,
    Heal         = 2,
    SelfHeal     = 3,
};
