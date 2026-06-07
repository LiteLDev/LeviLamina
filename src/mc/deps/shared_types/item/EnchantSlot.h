#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class EnchantSlot : uint {
    // bitfield representation
    None          = 0,
    ArmorHead     = 1u << 0,
    ArmorTorso    = 1u << 1,
    ArmorFeet     = 1u << 2,
    ArmorLegs     = 1u << 3,
    Sword         = 1u << 4,
    Bow           = 1u << 5,
    Hoe           = 1u << 6,
    Shears        = 1u << 7,
    Flintsteel    = 1u << 8,
    Axe           = 1u << 9,
    Pickaxe       = 1u << 10,
    Shovel        = 1u << 11,
    FishingRod    = 1u << 12,
    CarrotStick   = 1u << 13,
    Elytra        = 1u << 14,
    Spear         = 1u << 15,
    Crossbow      = 1u << 16,
    Shield        = 1u << 17,
    CosmeticHead  = 1u << 18,
    Compass       = 1u << 19,
    MushroomStick = 1u << 20,
    Brush         = 1u << 21,
    HeavyWeapon   = 1u << 22,
    MeleeSpear    = 1u << 23,
    GArmor        = ArmorHead | ArmorTorso | ArmorFeet | ArmorLegs,
    GDigging      = Hoe | Axe | Pickaxe | Shovel,
    GTool         = Hoe | Shears | Flintsteel | Shield,
    All           = 4294967295,
};

}
