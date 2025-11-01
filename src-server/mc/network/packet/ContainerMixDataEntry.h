#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerMixDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> fromItemId;
    ::ll::TypedStorage<4, 4, int> reagentItemId;
    ::ll::TypedStorage<4, 4, int> toItemId;
    // NOLINTEND

};
