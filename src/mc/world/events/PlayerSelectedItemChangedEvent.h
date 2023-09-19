#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSelectedItemChangedEvent {
public:
    // prevent constructor by default
    PlayerSelectedItemChangedEvent& operator=(PlayerSelectedItemChangedEvent const&);
    PlayerSelectedItemChangedEvent(PlayerSelectedItemChangedEvent const&);
    PlayerSelectedItemChangedEvent();
};
