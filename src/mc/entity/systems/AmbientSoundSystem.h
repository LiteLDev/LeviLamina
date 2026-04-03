#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class AmbientSoundComponent;
class EntityRegistry;
class IRandom;
// clang-format on

class AmbientSoundSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual ~AmbientSoundSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _tickAmbientSoundComponent(
        ::ActorOwnerComponent&   actorOwnerComponent,
        ::AmbientSoundComponent& ambientSoundComponent
    );

    MCNAPI_C static void
    tickAmbientSoundComponent(::Actor& actor, ::AmbientSoundComponent& ambientSoundComponent, ::IRandom& random);
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
