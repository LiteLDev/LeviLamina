#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::Legacy {

enum class EquipmentSlot : int {
    None          = 0xFF,
    Begin         = 0x0,
    HandSlot      = 0x0,
    Mainhand      = 0x0,
    Offhand       = 0x1,
    ArmorSlot     = 0x2,
    Head          = 0x2,
    Torso         = 0x3,
    Legs          = 0x4,
    Feet          = 0x5,
    ContainerSlot = 0x6,
    Hotbar        = 0x6,
    Inventory     = 0x7,
    EnderChest    = 0x8,
    Saddle        = 0x9,
    EntityArmor   = 0xA,
    Chest         = 0xB,
    Equippable    = 0xC,
    Count         = 0xD,
};

};
