#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

enum class ActorDamageCause : int {
    None            = -1,
    Override        = 0x0,
    Contact         = 0x1,
    EntityAttack    = 0x2,
    Projectile      = 0x3,
    Suffocation     = 0x4,
    Fall            = 0x5,
    Fire            = 0x6,
    FireTick        = 0x7,
    Lava            = 0x8,
    Drowning        = 0x9,
    BlockExplosion  = 0xA,
    EntityExplosion = 0xB,
    Void            = 0xC,
    SelfDestruct    = 0xD,
    Magic           = 0xE,
    Wither          = 0xF,
    Starve          = 0x10,
    Anvil           = 0x11,
    Thorns          = 0x12,
    FallingBlock    = 0x13,
    Piston          = 0x14,
    FlyIntoWall     = 0x15,
    Magma           = 0x16,
    Fireworks       = 0x17,
    Lightning       = 0x18,
    Charging        = 0x19,
    Temperature     = 0x1A,
    Freezing        = 0x1B,
    Stalactite      = 0x1C,
    Stalagmite      = 0x1D,
    RamAttack       = 0x1E,
    SonicBoom       = 0x1F,
    Campfire        = 0x20,
    SoulCampfire    = 0x21,
    All             = 0x22,
};

MCTAPI class Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<class CommandRegistry, enum class ActorDamageCause>();
