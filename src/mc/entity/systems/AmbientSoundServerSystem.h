#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class AmbientSoundServerComponent;
class EntityRegistry;
// clang-format on

class AmbientSoundServerSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual ~AmbientSoundServerSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickAmbientSoundComponent(
        ::ActorOwnerComponent&         actorOwnerComponent,
        ::AmbientSoundServerComponent& ambientSoundServerComponent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry& registry);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
