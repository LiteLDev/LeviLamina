#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerEnabledComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::atomic<int>> mManagerCounter;
    // NOLINTEND

};
