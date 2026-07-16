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
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void tick(::EntityRegistry&) /*override*/;
#else // LL_PLAT_C
    virtual void tick(::EntityRegistry& registry) /*override*/;
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
