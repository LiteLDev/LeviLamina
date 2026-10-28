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
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ExperienceRewardComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorTickedComponent;
struct ActorUniqueIDComponent;
struct DeathTickingComponent;
struct DimensionTypeComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
struct SpawnExperienceOrbRequestQueueComponent;
struct SpawnOnDeathComponent;
struct StateVectorComponent;
struct TickDeathNeededComponent;
// clang-format on

struct ServerMobTickDeathSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>,
      ::Read<
          ::AABBShapeComponent,
          ::ActorDefinitionIdentifierComponent,
          ::ActorUniqueIDComponent,
          ::DimensionTypeComponent,
          ::ExperienceRewardComponent,
          ::OffsetsComponent,
          ::SoundEventPlayerComponent,
          ::StateVectorComponent,
          ::PlayerComponent>,
      ::Write<::ActorDataFlagComponent, ::ActorDataDirtyFlagsComponent, ::ActorOwnerComponent, ::DeathTickingComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
      ::EntityFactoryT<>>> {
public:
    // ServerMobTickDeathSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // ServerMobTickDeathSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            152,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>,
                ::AABBShapeComponent const,
                ::ActorDefinitionIdentifierComponent const,
                ::ActorUniqueIDComponent const,
                ::DimensionTypeComponent const,
                ::OffsetsComponent const,
                ::SoundEventPlayerComponent const,
                ::StateVectorComponent const,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::ActorOwnerComponent,
                ::DeathTickingComponent,
                ::Optional<::ExperienceRewardComponent>,
                ::Optional<::PlayerComponent>,
                ::Optional<::SpawnOnDeathComponent>>>
                                                                                              mDeathView;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::SpawnExperienceOrbRequestQueueComponent>> mExperienceOrbRequest;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>>
            mSoundEventRequestView;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::std::optional<::ServerMobTickDeathSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::ExperienceRewardComponent,
                ::OffsetsComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::PlayerComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::ActorOwnerComponent,
                ::DeathTickingComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tick(
        ::StrictEntityContext&                                                   entity,
        ::AABBShapeComponent const&                                              aabbShape,
        ::ActorDefinitionIdentifierComponent const&                              actorIdentifier,
        ::ActorUniqueIDComponent const&                                          actorUniqueID,
        ::DimensionTypeComponent const&                                          dimensionType,
        ::OffsetsComponent const&                                                offsets,
        ::SoundEventPlayerComponent const&                                       soundEventPlayer,
        ::StateVectorComponent const&                                            stateVector,
        ::ActorDataFlagComponent&                                                actorFlags,
        ::ActorDataDirtyFlagsComponent&                                          actorDirtyFlags,
        ::ActorOwnerComponent&                                                   actorOwner,
        ::DeathTickingComponent&                                                 deathTicking,
        ::Optional<::ExperienceRewardComponent>                                  experienceReward,
        ::Optional<::PlayerComponent>                                            player,
        ::Optional<::SpawnOnDeathComponent>                                      spawnOnDeath,
        ::SpawnExperienceOrbRequestQueueComponent&                               experienceOrbRequestQueue,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> const& soundRequestQueueView
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::MobFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::ExperienceRewardComponent,
                ::OffsetsComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::PlayerComponent>,
            ::Write<
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::ActorOwnerComponent,
                ::DeathTickingComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
            ::EntityFactoryT<>>& context
    );


    // NOLINTEND
};
