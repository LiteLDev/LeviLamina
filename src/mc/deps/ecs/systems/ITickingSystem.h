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
    virtual ~ITickingSystem() /*override*/ = default;

    virtual void tick(::EntityRegistry& registry) = 0;

    virtual void singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    virtual void singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    MCNAPI void $singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
