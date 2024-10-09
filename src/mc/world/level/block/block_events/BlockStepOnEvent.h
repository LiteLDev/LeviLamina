#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

struct BlockStepOnEvent {
public:
    // prevent constructor by default
    BlockStepOnEvent& operator=(BlockStepOnEvent const&);
    BlockStepOnEvent(BlockStepOnEvent const&);
    BlockStepOnEvent();
};

}; // namespace BlockEvents
