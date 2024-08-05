#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithBlockAfterEvent {
public:
    // prevent constructor by default
    PlayerInteractWithBlockAfterEvent& operator=(PlayerInteractWithBlockAfterEvent const&);
    PlayerInteractWithBlockAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractWithBlockAfterEvent(struct PlayerInteractWithBlockAfterEvent const&);

    MCAPI ~PlayerInteractWithBlockAfterEvent();

    // NOLINTEND
};
