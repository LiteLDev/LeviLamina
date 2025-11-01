#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsomniaComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTimeSinceRest;
    ::ll::TypedStorage<4, 4, float> mDaysUntilInsomnia;
    ::ll::TypedStorage<4, 4, int> mTicksUntilInsomnia;
    // NOLINTEND

};
