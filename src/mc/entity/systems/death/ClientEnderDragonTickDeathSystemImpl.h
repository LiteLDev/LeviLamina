#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class StrictEntityContext;
struct ActorTickedComponent;
struct DeathTickingComponent;
struct EnderDragonFlagComponent;
struct ParticleEventDispatcherComponent;
struct ParticleEventRequestQueueComponent;
struct RandomComponent;
struct RandomReferenceComponent;
struct StateVectorComponent;
struct TickDeathNeededComponent;
struct WingFlapDataComponent;
// clang-format on

struct ClientEnderDragonTickDeathSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
      ::Read<::DeathTickingComponent>,
      ::Write<
          ::ActorOwnerComponent,
          ::ParticleEventDispatcherComponent,
          ::RandomReferenceComponent,
          ::StateVectorComponent,
          ::WingFlapDataComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
            ::Read<::DeathTickingComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ParticleEventDispatcherComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;

    // vIndex: 0
    virtual ~ClientEnderDragonTickDeathSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tick(
        ::StrictEntityContext const&,
        ::DeathTickingComponent const&                                       deathTicking,
        ::ActorOwnerComponent&                                               actorOwner,
        ::ParticleEventDispatcherComponent&                                  particleEventDispatcherComponent,
        ::RandomReferenceComponent&                                          randomReference,
        ::StateVectorComponent&                                              stateVector,
        ::WingFlapDataComponent&                                             wingFlapData,
        ::ViewT<::StrictEntityContext, ::RandomComponent>                    randomView,
        ::ViewT<::StrictEntityContext, ::ParticleEventRequestQueueComponent> particleEventRequestQueueView
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
            ::Read<::DeathTickingComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ParticleEventDispatcherComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
