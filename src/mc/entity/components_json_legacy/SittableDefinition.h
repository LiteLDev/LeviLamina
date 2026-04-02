#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

class SittableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnSit;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStand;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SittableDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
