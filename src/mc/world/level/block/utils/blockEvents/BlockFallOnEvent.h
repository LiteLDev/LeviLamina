#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

struct BlockFallOnEvent {
public:
    // prevent constructor by default
    BlockFallOnEvent& operator=(BlockFallOnEvent const&);
    BlockFallOnEvent(BlockFallOnEvent const&);
    BlockFallOnEvent();
};

}; // namespace BlockEvents
