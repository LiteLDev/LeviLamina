#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId {

public:
    // prevent constructor by default
    EntityId& operator=(EntityId const&) = delete;
    EntityId(EntityId const&)            = delete;
    EntityId()                           = delete;
};
