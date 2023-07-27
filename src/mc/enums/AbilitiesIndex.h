#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AbilitiesIndex : short {
    Invalid           = -1,
    Build             = 0x0,
    Mine              = 0x1,
    DoorsAndSwitches  = 0x2,
    OpenContainers    = 0x3,
    AttackPlayers     = 0x4,
    AttackMobs        = 0x5,
    OperatorCommands  = 0x6,
    Teleport          = 0x7,
    Invulnerable      = 0x8,
    Flying            = 0x9,
    MayFly            = 0xA,
    Instabuild        = 0xB,
    Lightning         = 0xC,
    FlySpeed          = 0xD,
    WalkSpeed         = 0xE,
    Muted             = 0xF,
    WorldBuilder      = 0x10,
    NoClip            = 0x11,
    PrivilegedBuilder = 0x12,
    AbilityCount      = 0x13,
};
