#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MatchmakingStateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTriggeringPlayerName;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mTriggeredByLocalPlayer;
    // NOLINTEND
};
