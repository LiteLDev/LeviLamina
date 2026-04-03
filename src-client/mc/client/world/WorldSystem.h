#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/InGameType.h"
#include "mc/client/world/WorldSystemModules.h"

// auto generated forward declare list
// clang-format off
struct TrialManager;
// clang-format on

namespace World {

class WorldSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::World::WorldSystemModules> mModules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void update(
        double              timestampMs,
        ::TrialManager*     trialManager,
        ::World::InGameType inGameType,
        bool                tickFriendsSystemIngame
    );
    // NOLINTEND
};

} // namespace World
