#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class EquipmentSlot : int {
    None = -1,
    Begin = 0,
    HandSlot = 0,
    Mainhand = 0,
    Offhand = 1,
    ArmorSlot = 2,
    Head = 2,
    Torso = 3,
    Legs = 4,
    Feet = 5,
    Body = 6,
    ContainerSlot = 7,
    Hotbar = 7,
    Inventory = 8,
    EnderChest = 9,
    Saddle = 10,
    EntityArmor = 11,
    Chest = 12,
    Equippable = 13,
    Count = 14,
};

}
