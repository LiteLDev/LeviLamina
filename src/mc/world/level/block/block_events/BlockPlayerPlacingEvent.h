#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

struct BlockPlayerPlacingEvent {
public:
    // prevent constructor by default
    BlockPlayerPlacingEvent& operator=(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent();
};

}; // namespace BlockEvents
