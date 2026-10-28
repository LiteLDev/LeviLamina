#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EquipmentLocation : uchar {
    Any             = 0,
    Hand            = 1,
    MainHand        = 2,
    InteractionHand = 3,
    AnyArmor        = 4,
    HeadArmor       = 5,
    TorsoArmor      = 6,
    LegArmor        = 7,
    FeetArmor       = 8,
    BodyArmor       = 9,
    Inventory       = 10,
};
