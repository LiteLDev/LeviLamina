#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameControllerTriggerBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            triggerId;
    ::ll::TypedStorage<4, 4, float>          triggerThreshold;
    // NOLINTEND
};
