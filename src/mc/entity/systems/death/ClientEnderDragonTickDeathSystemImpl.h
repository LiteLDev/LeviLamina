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
#include "mc/deps/ecs/strict/Include.h"
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
    // ClientEnderDragonTickDeathSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // ClientEnderDragonTickDeathSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            112,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
                ::DeathTickingComponent const,
                ::ActorOwnerComponent,
                ::ParticleEventDispatcherComponent,
                ::RandomReferenceComponent,
                ::StateVectorComponent,
                ::WingFlapDataComponent>>
                                                                                     mDeathView;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::RandomComponent>> mRandomView;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::ParticleEventRequestQueueComponent>>
            mParticleEventRequestQueueView;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::std::optional<::ClientEnderDragonTickDeathSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tick(
        ::StrictEntityContext const&,
        ::DeathTickingComponent const&                                              deathTicking,
        ::ActorOwnerComponent&                                                      actorOwner,
        ::ParticleEventDispatcherComponent&                                         particleEventDispatcherComponent,
        ::RandomReferenceComponent&                                                 randomReference,
        ::StateVectorComponent&                                                     stateVector,
        ::WingFlapDataComponent&                                                    wingFlapData,
        ::ViewT<::StrictEntityContext, ::RandomComponent> const&                    randomView,
        ::ViewT<::StrictEntityContext, ::ParticleEventRequestQueueComponent> const& particleEventRequestQueueView
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
};
