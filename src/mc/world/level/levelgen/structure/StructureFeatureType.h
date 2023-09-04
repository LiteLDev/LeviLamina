#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureFeatureType : schar {
    Unknown         = 0x0,
    EndCity         = 0x1,
    Fortress        = 0x2,
    Mineshaft       = 0x3,
    Monument        = 0x4,
    Stronghold      = 0x5,
    Temple          = 0x6,
    Village         = 0x7,
    WoodlandMansion = 0x8,
    Shipwreck       = 0x9,
    BuriedTreasure  = 0xA,
    Ruins           = 0xB,
    PillagerOutpost = 0xC,
    RuinedPortal    = 0xD,
    Bastion         = 0xE,
    AncientCity     = 0xF,
    TrailRuins      = 0x10,
    Count           = 0x11,
};
