#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class BossComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorTickedComponent;
struct ActorUniqueIDComponent;
struct DeathTickingComponent;
struct DimensionTypeComponent;
struct EnderDragonFlagComponent;
struct ParticleEventDispatcherComponent;
struct ParticleEventRequestQueueComponent;
struct RandomComponent;
struct RandomReferenceComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
struct SpawnExperienceOrbRequestQueueComponent;
struct StateVectorComponent;
struct TickDeathNeededComponent;
struct WingFlapDataComponent;
// clang-format on

struct ServerEnderDragonTickDeathSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
      ::Read<
          ::ActorDataFlagComponent,
          ::ActorDefinitionIdentifierComponent,
          ::ActorUniqueIDComponent,
          ::DeathTickingComponent,
          ::DimensionTypeComponent,
          ::SoundEventPlayerComponent>,
      ::Write<
          ::ActorOwnerComponent,
          ::ParticleEventDispatcherComponent,
          ::RandomReferenceComponent,
          ::StateVectorComponent,
          ::WingFlapDataComponent,
          ::BossComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
      ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DeathTickingComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ParticleEventDispatcherComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent,
                ::BossComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
            ::EntityFactoryT<>>& context
    ) /*override*/;

    // vIndex: 0
    virtual ~ServerEnderDragonTickDeathSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(
        ::StrictEntityContext const&                                         entity,
        ::ActorDataFlagComponent const&                                      actorFlags,
        ::ActorDefinitionIdentifierComponent const&                          actorIdentifier,
        ::ActorUniqueIDComponent const&                                      actorUniqueID,
        ::DeathTickingComponent const&                                       deathTicking,
        ::DimensionTypeComponent const&                                      dimensionType,
        ::SoundEventPlayerComponent const&                                   soundEventPlayerComponent,
        ::ActorOwnerComponent&                                               actorOwner,
        ::ParticleEventDispatcherComponent&                                  particleEventDispatcherComponent,
        ::RandomReferenceComponent&                                          randomReference,
        ::StateVectorComponent&                                              stateVector,
        ::WingFlapDataComponent&                                             wingFlapData,
        ::Optional<::BossComponent>                                          boss,
        ::SpawnExperienceOrbRequestQueueComponent&                           experienceOrbRequestQueueComponent,
        ::ViewT<::StrictEntityContext, ::ParticleEventRequestQueueComponent> particleEventRequestQueueView,
        ::ViewT<::StrictEntityContext, ::RandomComponent>                    randomView,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>    soundRequestQueueView
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DeathTickingComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ParticleEventDispatcherComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent,
                ::BossComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
