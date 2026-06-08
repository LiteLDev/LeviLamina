#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class ActorDamageCause : int {
    None            = -1,
    Override        = 0,
    Contact         = 1,
    EntityAttack    = 2,
    Projectile      = 3,
    Suffocation     = 4,
    Fall            = 5,
    Fire            = 6,
    FireTick        = 7,
    Lava            = 8,
    Drowning        = 9,
    BlockExplosion  = 10,
    EntityExplosion = 11,
    Void            = 12,
    SelfDestruct    = 13,
    Magic           = 14,
    Wither          = 15,
    Starve          = 16,
    Anvil           = 17,
    Thorns          = 18,
    FallingBlock    = 19,
    Piston          = 20,
    FlyIntoWall     = 21,
    Magma           = 22,
    Fireworks       = 23,
    Lightning       = 24,
    Charging        = 25,
    Temperature     = 26,
    Freezing        = 27,
    Stalactite      = 28,
    Stalagmite      = 29,
    RamAttack       = 30,
    SonicBoom       = 31,
    Campfire        = 32,
    SoulCampfire    = 33,
    MaceSmash       = 34,
    All             = 35,
};

}
