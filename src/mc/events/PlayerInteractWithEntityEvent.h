#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithEntityEvent {
public:
    // prevent constructor by default
    PlayerInteractWithEntityEvent& operator=(PlayerInteractWithEntityEvent const&);
    PlayerInteractWithEntityEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerInteractWithEntityEvent@@QEAA@AEBU0@@Z
    MCAPI PlayerInteractWithEntityEvent(struct PlayerInteractWithEntityEvent const&);

    // symbol: ??1PlayerInteractWithEntityEvent@@QEAA@XZ
    MCAPI ~PlayerInteractWithEntityEvent();

    // NOLINTEND
};
