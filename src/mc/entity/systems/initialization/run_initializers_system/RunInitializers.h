#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class StrictEntityContext;
// clang-format on

namespace RunInitializersSystem {

struct RunInitializers : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcefeb9;
    // NOLINTEND

public:
    // prevent constructor by default
    RunInitializers& operator=(RunInitializers const&);
    RunInitializers(RunInitializers const&);
    RunInitializers();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 4
    virtual void singleTick(::EntityRegistry& registry, ::EntityContext& entity) /*override*/;

    // vIndex: 3
    virtual void singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext) /*override*/;

    // vIndex: 0
    virtual ~RunInitializers() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);

    MCFOLD void $singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    MCFOLD void $singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RunInitializersSystem
