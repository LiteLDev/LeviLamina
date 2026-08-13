#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityContext;
class EntityRegistry;
class FireAnimationTrackerComponent;
struct OnFireComponent;
// clang-format on

class FireAnimationTrackerSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void _tickFireAnimationTrackerComponent(
        ::EntityContext&                    entity,
        ::ActorOwnerComponent&              actorOwnerComponent,
        ::FireAnimationTrackerComponent&    fireAnimationTrackerComponent,
        ::Optional<::OnFireComponent const> onFireComponent
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);


    // NOLINTEND
};
