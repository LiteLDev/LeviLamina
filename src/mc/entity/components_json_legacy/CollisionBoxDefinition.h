#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CollisionBoxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnke9cf3a;
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionBoxDefinition& operator=(CollisionBoxDefinition const&);
    CollisionBoxDefinition(CollisionBoxDefinition const&);
    CollisionBoxDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setHeight(float const& height);

    MCAPI void setWidth(float const& width);
    // NOLINTEND
};
