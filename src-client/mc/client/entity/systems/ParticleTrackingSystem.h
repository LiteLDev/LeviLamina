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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ParticleTrackingSystem(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& clientInstance);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickClientParticleComponent(
        ::EntityContext&                         entity,
        ::ActorComponent const&                  clientParticleComponent,
        ::ClientParticleInitializationComponent& particleSystemEngine,
        ::ParticleSystemEngine&
    );

    MCNAPI static void tickClientParticleTrackingComponent(
        ::EntityContext&                      entity,
        ::ActorComponent const&               clientParticleTrackingComponent,
        ::ClientParticleTrackingComponent&    clientParticleTerminationComponent,
        ::ClientParticleTerminationComponent& particleSystemEngine,
        ::ParticleSystemEngine&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& clientInstance);
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
