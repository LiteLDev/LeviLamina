#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockTryPlaceByPlayerEvent {
public:
    // prevent constructor by default
    BlockTryPlaceByPlayerEvent& operator=(BlockTryPlaceByPlayerEvent const&);
    BlockTryPlaceByPlayerEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockTryPlaceByPlayerEvent@@QEAA@AEBU0@@Z
    MCAPI BlockTryPlaceByPlayerEvent(struct BlockTryPlaceByPlayerEvent const&);

    // symbol: ??1BlockTryPlaceByPlayerEvent@@QEAA@XZ
    MCAPI ~BlockTryPlaceByPlayerEvent();

    // NOLINTEND
};
