#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class EntitySystems;
class StrictEntityContext;
// clang-format on

namespace RunInitializersSystem {

struct RunInitializers : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EntitySystems&> mSystems;
    // NOLINTEND

public:
    // prevent constructor by default
    RunInitializers& operator=(RunInitializers const&);
    RunInitializers(RunInitializers const&);
    RunInitializers();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual void singleTick(::EntityRegistry& registry, ::EntityContext& entity) /*override*/;

    virtual void singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext) /*override*/;

    virtual ~RunInitializers() /*override*/ = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RunInitializersSystem
