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
#ifdef LL_PLAT_S
    virtual ~ITickingSystem() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ITickingSystem() /*override*/;
#endif

    virtual void tick(::EntityRegistry& registry) = 0;

    virtual void singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    virtual void singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    MCFOLD void $singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);


    // NOLINTEND
};
