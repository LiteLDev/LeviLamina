#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameEventConfig {

enum class GameEventCategory : uchar {
    // bitfield representation
    NoCategory = 0,
    VibrationsCategory = 1 << 0,
    IgnoreVibrationsIfSneakingCategory = 1 << 1,
    IgnoreVibrationsOnDampeningBlockCategory = 1 << 2,
    IgnoreVibrationsInDampeningBlockCategory = 1 << 3,
    HandleVibrationsFromDampeningActorCategory = 1 << 4,
};

}
