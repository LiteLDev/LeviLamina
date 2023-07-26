#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSelectedItemChangedEvent {

public:
    // prevent constructor by default
    PlayerSelectedItemChangedEvent& operator=(PlayerSelectedItemChangedEvent const&) = delete;
    PlayerSelectedItemChangedEvent(PlayerSelectedItemChangedEvent const&)            = delete;
    PlayerSelectedItemChangedEvent()                                                 = delete;
};
