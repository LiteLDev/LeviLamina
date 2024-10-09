#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockTryDestroyByPlayerEvent {
public:
    // prevent constructor by default
    BlockTryDestroyByPlayerEvent& operator=(BlockTryDestroyByPlayerEvent const&);
    BlockTryDestroyByPlayerEvent(BlockTryDestroyByPlayerEvent const&);
    BlockTryDestroyByPlayerEvent();

public:
    // NOLINTBEGIN
    MCAPI ~BlockTryDestroyByPlayerEvent();

    // NOLINTEND
};
