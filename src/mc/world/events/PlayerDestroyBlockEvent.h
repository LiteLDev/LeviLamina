#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDestroyBlockEvent {
public:
    // prevent constructor by default
    PlayerDestroyBlockEvent& operator=(PlayerDestroyBlockEvent const&);
    PlayerDestroyBlockEvent(PlayerDestroyBlockEvent const&);
    PlayerDestroyBlockEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1PlayerDestroyBlockEvent@@QEAA@XZ
    MCAPI ~PlayerDestroyBlockEvent();

    // NOLINTEND
};
