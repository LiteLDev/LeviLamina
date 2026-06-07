#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/entity/components/DimensionStateComponent.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class DimensionStateSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isDimensionReady(::EntityContext const& entity);

#ifdef LL_PLAT_C
    MCAPI static bool isDimensionReady(::WeakRef<::EntityContext> entityRef);
#endif

    MCAPI static void setDimensionState(::EntityContext& entity, ::DimensionStateComponent::DimensionState state);

#ifdef LL_PLAT_C
    MCAPI static void setLoadIntoDimensionTimeout(
        ::EntityContext&                        entity,
        ::std::chrono::steady_clock::time_point loadIntoDimensionTimeout
    );
#endif
    // NOLINTEND
};
