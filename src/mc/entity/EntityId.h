#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYID
public:
    EntityId& operator=(EntityId const&) = delete;
    EntityId(EntityId const&)            = delete;
    EntityId()                           = delete;
#endif

public:
};
