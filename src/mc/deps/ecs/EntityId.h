#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId {
public:
    // prevent constructor by default
    EntityId& operator=(EntityId const&);
    EntityId(EntityId const&);
    EntityId();
};
