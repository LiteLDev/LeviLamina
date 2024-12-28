#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/OnFireSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class OnFireClientSystem : public ::OnFireSystem {
public:
    // prevent constructor by default
    OnFireClientSystem& operator=(OnFireClientSystem const&);
    OnFireClientSystem(OnFireClientSystem const&);
    OnFireClientSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~OnFireClientSystem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND
};
