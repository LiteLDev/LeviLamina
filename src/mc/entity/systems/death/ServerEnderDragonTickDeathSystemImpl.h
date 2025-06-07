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
class BossComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorTickedComponent;
struct ActorUniqueIDComponent;
struct DeathTickingComponent;
struct DimensionTypeComponent;
struct EnderDragonFlagComponent;
struct IsDeadFlagComponent;
struct SoundEventPlayerComponent;
struct SpawnExperienceOrbRequestQueueComponent;
struct StateVectorComponent;
// clang-format on

struct ServerEnderDragonTickDeathSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::IsDeadFlagComponent, ::EnderDragonFlagComponent>,
      ::Read<
          ::ActorDataFlagComponent,
          ::ActorDefinitionIdentifierComponent,
          ::ActorUniqueIDComponent,
          ::DeathTickingComponent,
          ::DimensionTypeComponent,
          ::SoundEventPlayerComponent>,
      ::Write<::ActorOwnerComponent, ::StateVectorComponent, ::BossComponent>,
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
            ::Filter<::ActorTickedComponent, ::IsDeadFlagComponent, ::EnderDragonFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DeathTickingComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent>,
            ::Write<::ActorOwnerComponent, ::StateVectorComponent, ::BossComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
            ::EntityFactoryT<>>&
    ) /*override*/;

    // vIndex: 0
    virtual ~ServerEnderDragonTickDeathSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
