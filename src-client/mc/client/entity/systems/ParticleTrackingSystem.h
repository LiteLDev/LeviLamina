#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ClientParticleInitializationComponent;
class ClientParticleTerminationComponent;
class ClientParticleTrackingComponent;
class EntityContext;
class EntityRegistry;
class IClientInstance;
class ParticleSystemEngine;
struct ActorComponent;
// clang-format on

class ParticleTrackingSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClientInstance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickClientParticleComponent(
        ::EntityContext& entity,
        ::ActorComponent const&,
        ::ClientParticleInitializationComponent& clientParticleComponent,
        ::ParticleSystemEngine&                  particleSystemEngine
    );

    MCAPI static void tickClientParticleTrackingComponent(
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
    MCAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
