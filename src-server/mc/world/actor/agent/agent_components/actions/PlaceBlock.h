#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"
#include "mc/world/item/ItemStack.h"

namespace AgentComponents::Actions {

struct PlaceBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> dir;
    ::ll::TypedStorage<4, 4, int>                          slot;
    ::ll::TypedStorage<8, 152, ::ItemStack>                item;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlaceBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace AgentComponents::Actions
