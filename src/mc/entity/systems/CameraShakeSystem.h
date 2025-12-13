#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class CameraShakeComponent;
class EntityContext;
class EntityRegistry;
// clang-format on

class CameraShakeSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual ~CameraShakeSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _tickComponent(
        ::EntityContext&        entity,
        ::ActorOwnerComponent&  actorOwnerComponent,
        ::CameraShakeComponent& cameraShakeComponent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $tick(::EntityRegistry& registry);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
