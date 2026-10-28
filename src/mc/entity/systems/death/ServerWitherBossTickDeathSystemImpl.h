#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
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
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorTickedComponent;
struct ActorUniqueIDComponent;
struct DeathTickingComponent;
struct DimensionTypeComponent;
struct IsDeadFlagComponent;
struct OverlayAlphaComponent;
struct ShieldFlickerComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
struct SpawnExperienceOrbRequestQueueComponent;
struct StateVectorComponent;
struct SwellComponent;
struct SynchedActorDataComponent;
struct TickDeathNeededComponent;
struct WitherBossFlagComponent;
// clang-format on

struct ServerWitherBossTickDeathSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
      ::Read<
          ::ActorDataFlagComponent,
          ::ActorDefinitionIdentifierComponent,
          ::ActorUniqueIDComponent,
          ::DeathTickingComponent,
          ::DimensionTypeComponent,
          ::SoundEventPlayerComponent,
          ::StateVectorComponent,
          ::ExperienceRewardComponent>,
      ::Write<
          ::ActorOwnerComponent,
          ::OverlayAlphaComponent,
          ::ShieldFlickerComponent,
          ::SwellComponent,
          ::SynchedActorDataComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
      ::EntityFactoryT<>>> {
public:
    // ServerWitherBossTickDeathSystemImpl inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // ServerWitherBossTickDeathSystemImpl inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            160,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
                ::ActorDataFlagComponent const,
                ::ActorDefinitionIdentifierComponent const,
                ::ActorUniqueIDComponent const,
                ::DeathTickingComponent const,
                ::DimensionTypeComponent const,
                ::SoundEventPlayerComponent const,
                ::StateVectorComponent const,
                ::ActorOwnerComponent,
                ::OverlayAlphaComponent,
                ::ShieldFlickerComponent,
                ::SwellComponent,
                ::SynchedActorDataComponent,
                ::Optional<::ExperienceRewardComponent const>>>
                                                                                              mDeathView;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::SpawnExperienceOrbRequestQueueComponent>> mExperienceOrbRequest;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>>
                                                                          mSoundEventRequestView;
        ::ll::TypedStorage<8, 8, ::EntityModifier<::IsDeadFlagComponent>> mEntityModifier;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::std::optional<::ServerWitherBossTickDeathSystemImpl::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DeathTickingComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::ExperienceRewardComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::OverlayAlphaComponent,
                ::ShieldFlickerComponent,
                ::SwellComponent,
                ::SynchedActorDataComponent>,
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
        ::StrictEntityContext const&                                             entity,
        ::ActorDataFlagComponent const&                                          actorFlags,
        ::ActorDefinitionIdentifierComponent const&                              actorIdentifier,
        ::ActorUniqueIDComponent const&                                          actorUniqueID,
        ::DeathTickingComponent const&                                           deathTicking,
        ::DimensionTypeComponent const&                                          dimensionType,
        ::SoundEventPlayerComponent const&                                       soundEventPlayerComponent,
        ::StateVectorComponent const&                                            stateVector,
        ::ActorOwnerComponent&                                                   actorOwner,
        ::OverlayAlphaComponent&                                                 overlayAlpha,
        ::ShieldFlickerComponent&                                                shieldFlicker,
        ::SwellComponent&                                                        swell,
        ::SynchedActorDataComponent&                                             synchedActorData,
        ::Optional<::ExperienceRewardComponent const>                            experienceReward,
        ::SpawnExperienceOrbRequestQueueComponent&                               experienceOrbRequestQueueComponent,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> const& soundRequestQueueView,
        ::EntityModifier<::IsDeadFlagComponent> const&                           modifier
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DeathTickingComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::ExperienceRewardComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::OverlayAlphaComponent,
                ::ShieldFlickerComponent,
                ::SwellComponent,
                ::SynchedActorDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<::SpawnExperienceOrbRequestQueueComponent>,
            ::EntityFactoryT<>>& context
    );


    // NOLINTEND
};
