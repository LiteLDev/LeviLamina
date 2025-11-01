#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorCategory : uint {
    // bitfield representation
    None = 0,
    Player = 1u << 0,
    Mob = 1u << 1,
    Monster = 1u << 2,
    Humanoid = 1u << 3,
    Animal = 1u << 4,
    WaterSpawning = 1u << 5,
    Pathable = 1u << 6,
    Tamable = 1u << 7,
    Ridable = 1u << 8,
    Item = 1u << 10,
    Ambient = 1u << 11,
    Villager = 1u << 12,
    Arthropod = 1u << 13,
    Undead = 1u << 14,
    Zombie = 1u << 15,
    Minecart = 1u << 16,
    Boat = 1u << 17,
    NonTargetable = 1u << 18,
    Predictable = 1u << 19,
    HumanoidMonster = Monster | Humanoid,
    WaterAnimal = Animal | WaterSpawning,
    TamableAnimal = Animal | Tamable,
    EvocationIllagerMonster = Monster | Humanoid | Villager,
    UndeadMob = Monster | Undead,
    ZombieMonster = Monster | Zombie,
    MinecartRidable = Ridable | Minecart,
    BoatRideable = Ridable | Boat,
};

constexpr ActorCategory operator|(ActorCategory a, ActorCategory b) {
    using integer_type = std::underlying_type_t<ActorCategory>;
    return static_cast<ActorCategory>(static_cast<integer_type>(a) | static_cast<integer_type>(b));
}
constexpr ActorCategory operator&(ActorCategory a, ActorCategory b) {
    using integer_type = std::underlying_type_t<ActorCategory>;
    return static_cast<ActorCategory>(static_cast<integer_type>(a) & static_cast<integer_type>(b));
}
