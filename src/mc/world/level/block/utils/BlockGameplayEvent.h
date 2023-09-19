#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct BlockGameplayEvent {
public:
    // prevent constructor by default
    BlockGameplayEvent& operator=(BlockGameplayEvent const&);
    BlockGameplayEvent(BlockGameplayEvent const&);
    BlockGameplayEvent();
};
