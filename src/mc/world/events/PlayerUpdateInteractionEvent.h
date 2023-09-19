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
    // symbol: ??1PlayerUpdateInteractionEvent@@QEAA@XZ
    MCAPI ~PlayerUpdateInteractionEvent();

    // NOLINTEND
};
