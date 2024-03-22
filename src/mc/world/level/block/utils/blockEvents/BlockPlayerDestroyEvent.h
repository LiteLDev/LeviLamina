#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

struct BlockPlayerDestroyEvent {
public:
    // prevent constructor by default
    BlockPlayerDestroyEvent& operator=(BlockPlayerDestroyEvent const&);
    BlockPlayerDestroyEvent(BlockPlayerDestroyEvent const&);
    BlockPlayerDestroyEvent();
};

}; // namespace BlockEvents
