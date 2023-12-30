#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorCategory : uint {
    None          = 0,
    Player        = 1 << 0,
    Mob           = 1 << 1,
    Monster       = 1 << 2,
    Humanoid      = 1 << 3,
    Animal        = 1 << 4,
    WaterSpawning = 1 << 5,
    Pathable      = 1 << 6,
    Tamable       = 1 << 7,
    Ridable       = 1 << 8,
    UNUSED9       = 1 << 9,
    Item          = 1 << 10,
    Ambient       = 1 << 11,
    Villager      = 1 << 12,
    Arthropod     = 1 << 13,
    Undead        = 1 << 14,
    Zombie        = 1 << 15,
    Minecart      = 1 << 16,
    Boat          = 1 << 17,
    NonTargetable = 1 << 18,
    Predictable   = 1 << 19,

    BoatRideable            = Boat | Ridable,
    MinecartRidable         = Minecart | Ridable,
    HumanoidMonster         = Humanoid | Monster,
    WaterAnimal             = WaterSpawning | Animal,
    TamableAnimal           = Tamable | Animal,
    UndeadMob               = Undead | Monster, // Mojang did.
    ZombieMonster           = Zombie | Monster,
    EvocationIllagerMonster = Villager | HumanoidMonster,
};
