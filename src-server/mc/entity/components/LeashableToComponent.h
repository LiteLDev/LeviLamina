#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LeashableToComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanRetrieveFrom;
    ::ll::TypedStorage<1, 1, bool> mCanLeashToWithoutSneaking;
    // NOLINTEND

};
