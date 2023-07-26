#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct PlayerGameplayEvent {

public:
    // prevent constructor by default
    PlayerGameplayEvent& operator=(PlayerGameplayEvent const&) = delete;
    PlayerGameplayEvent(PlayerGameplayEvent const&)            = delete;
    PlayerGameplayEvent()                                      = delete;
};
