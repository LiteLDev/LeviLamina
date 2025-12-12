#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ISystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class StrictEntityContext;
// clang-format on

class ITickingSystem : public ::ISystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITickingSystem() /*override*/ = default;

    // vIndex: 2
    virtual void tick(::EntityRegistry&) = 0;

    // vIndex: 4
    virtual void singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    // vIndex: 3
    virtual void singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    MCNAPI void $singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);
    // NOLINTEND
};
