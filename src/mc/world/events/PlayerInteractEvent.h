#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractEvent {
public:
    // prevent constructor by default
    PlayerInteractEvent& operator=(PlayerInteractEvent const&);
    PlayerInteractEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerInteractEvent@@QEAA@AEBU0@@Z
    MCAPI PlayerInteractEvent(struct PlayerInteractEvent const&);

    // symbol: ??1PlayerInteractEvent@@QEAA@XZ
    MCAPI ~PlayerInteractEvent();

    // NOLINTEND
};
