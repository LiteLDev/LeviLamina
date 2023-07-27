#pragma once

#include "mc/_HeaderOutputPredefine.h"
enum class ContainerType : char {
    None               = -9,
    Inventory          = -1,
    Container          = 0x0,
    Workbench          = 0x1,
    Furnace            = 0x2,
    Enchantment        = 0x3,
    BrewingStand       = 0x4,
    Anvil              = 0x5,
    Dispenser          = 0x6,
    Dropper            = 0x7,
    Hopper             = 0x8,
    Cauldron           = 0x9,
    MinecartChest      = 0xA,
    MinecartHopper     = 0xB,
    Horse              = 0xC,
    Beacon             = 0xD,
    StructureEditor    = 0xE,
    Trade              = 0xF,
    CommandBlock       = 0x10,
    Jukebox            = 0x11,
    Armor              = 0x12,
    Hand               = 0x13,
    CompoundCreator    = 0x14,
    ElementConstructor = 0x15,
    MaterialReducer    = 0x16,
    LabTable           = 0x17,
    Loom               = 0x18,
    Lectern            = 0x19,
    Grindstone         = 0x1A,
    BlastFurnace       = 0x1B,
    Smoker             = 0x1C,
    Stonecutter        = 0x1D,
    Cartography        = 0x1E,
    Hud                = 0x1F,
    JigsawEditor       = 0x20,
    SmithingTable      = 0x21,
    ChestBoat          = 0x22,
};
