#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RealmEventId : int {
    UnknownEvent                 = -1,
    FirstDiamond                 = 0,
    FirstEnderDragonDefeated     = 1,
    FirstNetherPortalLit         = 2,
    FirstWitherDefeated          = 3,
    PillagerCaptainDefeated      = 4,
    BredAnimals                  = 5,
    FirstMushroomFieldFound      = 6,
    FirstBadlandsFound           = 7,
    FirstPeakMountainFound       = 8,
    FirstAbandonedMineshaftFound = 9,
    FirstAncientCityFound        = 10,
    FirstWoodlandMansionFound    = 11,
    FirstPillagerOutpostFound    = 12,
    FirstNetherFortressFound     = 13,
    FirstEndPortal               = 14,
    RealmCreated                 = 15,
    NewMember                    = 16,
    SlotSwitch                   = 17,
    FirstPoweredBeacon           = 18,
    DefeatEnderDragon            = 19,
    DefeatWither                 = 20,
    FirstCraftedNetherite        = 21,
    FirstEnchantment             = 22,
    NamedMob                     = 23,
};
