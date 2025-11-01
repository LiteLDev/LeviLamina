#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ResourceDropsCause : int {
    PlayerMining = 0,
    Explosion = 1,
    ProjectileHit = 2,
    Other = 3,
};
