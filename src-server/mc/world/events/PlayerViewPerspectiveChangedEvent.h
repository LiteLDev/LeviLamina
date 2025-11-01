#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerViewPerspectiveChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const> mFrom;
    ::ll::TypedStorage<4, 4, int const> mTo;
    // NOLINTEND

};
