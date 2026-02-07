#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class ParticleSystemEngine;
struct ActorComponent;
struct ClientParticleInitializationComponent;
struct ClientParticleTerminationComponent;
struct ClientParticleTrackingComponent;
// clang-format on

class ParticleTrackingSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk50d5a6;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleTrackingSystem& operator=(ParticleTrackingSystem const&);
    ParticleTrackingSystem(ParticleTrackingSystem const&);
    ParticleTrackingSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual ~ParticleTrackingSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickClientParticleComponent(
        ::EntityContext& entity,
        ::ActorComponent const&,
        ::ClientParticleInitializationComponent& clientParticleComponent,
        ::ParticleSystemEngine&                  particleSystemEngine
    );

    MCNAPI static void tickClientParticleTrackingComponent(
        ::EntityContext& entity,
        ::ActorComponent const&,
        ::ClientParticleTrackingComponent&    clientParticleTrackingComponent,
        ::ClientParticleTerminationComponent& clientParticleTerminationComponent,
        ::ParticleSystemEngine&               particleSystemEngine
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
