#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChestBlockTryPairEvent {
public:
    // prevent constructor by default
    ChestBlockTryPairEvent& operator=(ChestBlockTryPairEvent const&);
    ChestBlockTryPairEvent(ChestBlockTryPairEvent const&);
    ChestBlockTryPairEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ChestBlockTryPairEvent();

    // NOLINTEND
};
