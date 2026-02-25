#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ButtonSoundEventConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> id;
    bool                           matchSpecificButtonId : 1;
    // NOLINTEND
};
