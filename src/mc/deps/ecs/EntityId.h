#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityId {
public:
    // EntityId inner types define
    using underlying_type = uint;

    using entity_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRawId;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityId& operator=(EntityId const&);
    EntityId(EntityId const&);
    EntityId();
};
