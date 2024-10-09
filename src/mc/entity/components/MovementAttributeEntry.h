#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAttributeEntry {
public:
    // prevent constructor by default
    MovementAttributeEntry& operator=(MovementAttributeEntry const&);
    MovementAttributeEntry(MovementAttributeEntry const&);
    MovementAttributeEntry();
};
