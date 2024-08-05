#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithEntityBeforeEvent {
public:
    // prevent constructor by default
    PlayerInteractWithEntityBeforeEvent& operator=(PlayerInteractWithEntityBeforeEvent const&);
    PlayerInteractWithEntityBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractWithEntityBeforeEvent(struct PlayerInteractWithEntityBeforeEvent const&);

    MCAPI ~PlayerInteractWithEntityBeforeEvent();

    // NOLINTEND
};
