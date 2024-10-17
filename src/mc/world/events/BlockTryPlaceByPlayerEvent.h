#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockTryPlaceByPlayerEvent {
public:
    // prevent constructor by default
    BlockTryPlaceByPlayerEvent& operator=(BlockTryPlaceByPlayerEvent const&);
    BlockTryPlaceByPlayerEvent(BlockTryPlaceByPlayerEvent const&);
    BlockTryPlaceByPlayerEvent();

public:
    // NOLINTBEGIN
    MCAPI ~BlockTryPlaceByPlayerEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
