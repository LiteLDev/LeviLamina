#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
struct ActorTickedComponent;
struct DeathTickingComponent;
struct EnderDragonFlagComponent;
struct ParticleEventDispatcherComponent;
struct RandomReferenceComponent;
struct StateVectorComponent;
struct TickDeathNeededComponent;
// clang-format on

struct ClientEnderDragonTickDeathSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::EnderDragonFlagComponent>,
      ::Read<::DeathTickingComponent>,
      ::Write<
          ::ActorOwnerComponent,
          ::ParticleEventDispatcherComponent,
          ::RandomReferenceComponent,
          ::StateVectorComponent>,
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
                ::StateVectorComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&
    ) /*override*/;

    // vIndex: 0
    virtual ~ClientEnderDragonTickDeathSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
