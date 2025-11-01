#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class ContainerType : schar {
    None               = -9,
    Inventory          = -1,
    Container          = 0,
    Workbench          = 1,
    Furnace            = 2,
    Enchantment        = 3,
    BrewingStand       = 4,
    Anvil              = 5,
    Dispenser          = 6,
    Dropper            = 7,
    Hopper             = 8,
    Cauldron           = 9,
    MinecartChest      = 10,
    MinecartHopper     = 11,
    Horse              = 12,
    Beacon             = 13,
    StructureEditor    = 14,
    Trade              = 15,
    CommandBlock       = 16,
    Jukebox            = 17,
    Armor              = 18,
    Hand               = 19,
    CompoundCreator    = 20,
    ElementConstructor = 21,
    MaterialReducer    = 22,
    LabTable           = 23,
    Loom               = 24,
    Lectern            = 25,
    Grindstone         = 26,
    BlastFurnace       = 27,
    Smoker             = 28,
    Stonecutter        = 29,
    Cartography        = 30,
    Hud                = 31,
    JigsawEditor       = 32,
    SmithingTable      = 33,
    ChestBoat          = 34,
    DecoratedPot       = 35,
    Crafter            = 36,
};

}
