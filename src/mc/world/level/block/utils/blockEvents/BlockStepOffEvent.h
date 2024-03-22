#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

struct BlockStepOffEvent {
public:
    // prevent constructor by default
    BlockStepOffEvent& operator=(BlockStepOffEvent const&);
    BlockStepOffEvent(BlockStepOffEvent const&);
    BlockStepOffEvent();
};

}; // namespace BlockEvents
