#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerRespawnRandomizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkfec188;
    ::ll::UntypedStorage<4, 4>  mUnkef49ff;
    ::ll::UntypedStorage<4, 4>  mUnk79ea10;
    ::ll::UntypedStorage<4, 24> mUnk55ab1a;
    ::ll::UntypedStorage<4, 24> mUnk86d41b;
    ::ll::UntypedStorage<4, 12> mUnk9d7622;
    ::ll::UntypedStorage<4, 12> mUnkba14a2;
    ::ll::UntypedStorage<4, 12> mUnk1ff2e8;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRespawnRandomizer& operator=(PlayerRespawnRandomizer const&);
    PlayerRespawnRandomizer(PlayerRespawnRandomizer const&);
    PlayerRespawnRandomizer();
};
