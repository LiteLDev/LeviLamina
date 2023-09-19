#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct PlayerGameplayEvent {
public:
    // prevent constructor by default
    PlayerGameplayEvent& operator=(PlayerGameplayEvent const&);
    PlayerGameplayEvent(PlayerGameplayEvent const&);
    PlayerGameplayEvent();
};
