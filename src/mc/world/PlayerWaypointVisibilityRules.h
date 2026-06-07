#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerWaypointVisibilityRules {
public:
    // PlayerWaypointVisibilityRules inner types define
    enum class Flag : uchar {
        Spectator            = 1,
        SpectatorToSpectator = 2,
        Hidden               = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk73f872;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerWaypointVisibilityRules& operator=(PlayerWaypointVisibilityRules const&);
    PlayerWaypointVisibilityRules(PlayerWaypointVisibilityRules const&);
    PlayerWaypointVisibilityRules();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void set(::PlayerWaypointVisibilityRules::Flag f, bool value);

    MCNAPI bool test(::PlayerWaypointVisibilityRules::Flag f) const;
    // NOLINTEND
};
