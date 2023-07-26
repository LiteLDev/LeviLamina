#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TriggerJumpRequestComponent {

public:
    // prevent constructor by default
    TriggerJumpRequestComponent& operator=(TriggerJumpRequestComponent const&) = delete;
    TriggerJumpRequestComponent(TriggerJumpRequestComponent const&)            = delete;
    TriggerJumpRequestComponent()                                              = delete;
};
