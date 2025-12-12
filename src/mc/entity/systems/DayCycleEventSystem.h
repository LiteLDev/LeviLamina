#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class DayCycleEventSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayCycleEventSystem() /*override*/ = default;

    virtual void tick(::EntityRegistry& registry) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
