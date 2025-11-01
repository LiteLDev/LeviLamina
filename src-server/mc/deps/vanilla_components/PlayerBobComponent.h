#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerBobComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mBob;
    ::ll::TypedStorage<4, 4, float> mBobPrev;
    // NOLINTEND

};
