#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
// clang-format on

class ClientLoadingProgressTickingSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void tick(::EntityRegistry&) /*override*/;
#else // LL_PLAT_C
    virtual void tick(::EntityRegistry& registry) /*override*/;
#endif

    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static float getLoadingProgress(::WeakRef<::EntityContext> entityRef);

    MCAPI static ::LoadingState getLoadingState(::WeakRef<::EntityContext> entityRef);

    MCAPI static bool hasFinishedLoading(::EntityContext const& entity);

    MCAPI static bool hasFinishedLoading(::WeakRef<::EntityContext> entityRef);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $tick(::EntityRegistry& registry);
#endif


    // NOLINTEND
};
