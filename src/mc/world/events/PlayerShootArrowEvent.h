#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerShootArrowEvent {
public:
    // prevent constructor by default
    PlayerShootArrowEvent& operator=(PlayerShootArrowEvent const&);
    PlayerShootArrowEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerShootArrowEvent@@QEAA@AEBU0@@Z
    MCAPI PlayerShootArrowEvent(struct PlayerShootArrowEvent const&);

    // symbol: ??1PlayerShootArrowEvent@@QEAA@XZ
    MCAPI ~PlayerShootArrowEvent();

    // NOLINTEND
};
