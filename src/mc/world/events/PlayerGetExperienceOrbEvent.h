#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerGetExperienceOrbEvent {
public:
    // prevent constructor by default
    PlayerGetExperienceOrbEvent& operator=(PlayerGetExperienceOrbEvent const&);
    PlayerGetExperienceOrbEvent(PlayerGetExperienceOrbEvent const&);
    PlayerGetExperienceOrbEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerGetExperienceOrbEvent();

    // NOLINTEND
};
