#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerUseNameTagEvent {
public:
    // prevent constructor by default
    PlayerUseNameTagEvent& operator=(PlayerUseNameTagEvent const&);
    PlayerUseNameTagEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerUseNameTagEvent@@QEAA@AEBU0@@Z
    MCAPI PlayerUseNameTagEvent(struct PlayerUseNameTagEvent const&);

    // symbol: ??1PlayerUseNameTagEvent@@QEAA@XZ
    MCAPI ~PlayerUseNameTagEvent();

    // NOLINTEND
};
