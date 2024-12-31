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
    // prevent constructor by default
    DayCycleEventSystem& operator=(DayCycleEventSystem const&);
    DayCycleEventSystem(DayCycleEventSystem const&);
    DayCycleEventSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DayCycleEventSystem() /*override*/ = default;

    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
