#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

struct BlockPlayerInteractEvent {
public:
    // prevent constructor by default
    BlockPlayerInteractEvent& operator=(BlockPlayerInteractEvent const&);
    BlockPlayerInteractEvent(BlockPlayerInteractEvent const&);
    BlockPlayerInteractEvent();
};

}; // namespace BlockEvents
