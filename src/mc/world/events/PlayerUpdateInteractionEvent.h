#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerUpdateInteractionEvent {
public:
    // prevent constructor by default
    PlayerUpdateInteractionEvent& operator=(PlayerUpdateInteractionEvent const&);
    PlayerUpdateInteractionEvent(PlayerUpdateInteractionEvent const&);
    PlayerUpdateInteractionEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerUpdateInteractionEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
