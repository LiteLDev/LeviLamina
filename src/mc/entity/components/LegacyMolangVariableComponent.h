#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyMolangVariableComponent {
public:
    // LegacyMolangVariableComponent inner types define
    enum class VariableUpdateType : int {
        MobOnly         = 0,
        Agent           = 1,
        ArmorStand      = 2,
        Cat             = 3,
        Chicken         = 4,
        EnderDragon     = 5,
        Fish            = 6,
        Ghast           = 7,
        Goat            = 8,
        Horse           = 9,
        IronGolem       = 10,
        Llama           = 11,
        Ocelot          = 12,
        Pillager        = 13,
        Piglin          = 14,
        Pufferfish      = 15,
        Rabbit          = 16,
        Shulker         = 17,
        Squid           = 18,
        TripodCamera    = 19,
        TropicalFish    = 20,
        VillagerV2      = 21,
        WanderingTrader = 22,
        Witch           = 23,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb2b1e8;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyMolangVariableComponent& operator=(LegacyMolangVariableComponent const&);
    LegacyMolangVariableComponent(LegacyMolangVariableComponent const&);
    LegacyMolangVariableComponent();
};
