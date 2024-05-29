#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

struct BlockQueuedTickEvent {
public:
    // prevent constructor by default
    BlockQueuedTickEvent& operator=(BlockQueuedTickEvent const&);
    BlockQueuedTickEvent(BlockQueuedTickEvent const&);
    BlockQueuedTickEvent();
};

}; // namespace BlockEvents
