#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PerfContextGameplayMode : ushort {
    SingleplayerVanilla          = 0,
    SingleplayerMarketplace      = 1,
    MultiplayerOnlineVanilla     = 2,
    MultiplayerOnlineMarketplace = 3,
    RealmVanilla                 = 4,
    RealmMarketplace             = 5,
    Server3P                     = 6,
    ServerGathering              = 7,
    Menu                         = 8,
    Unknown                      = 9,
};
