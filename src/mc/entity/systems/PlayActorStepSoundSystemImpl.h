#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct CamelFlagComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct GallopSoundCounterComponent;
struct MakesLavaStepSoundComponent;
struct MovementSoundComponent;
struct RandomComponent;
struct RandomReferenceComponent;
struct ShouldPlayStepSoundComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
struct UsesDefaultStepSoundComponent;
// clang-format on

namespace PlayActorStepSoundSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tick(
    ::entt::type_list<
        ::Include<::ShouldPlayStepSoundComponent>,
        ::Exclude<
            ::UsesDefaultStepSoundComponent,
            ::GallopSoundCounterComponent,
            ::CamelFlagComponent,
            ::MakesLavaStepSoundComponent>>                            entity,
    ::StrictEntityContext const&                                       actorOwner,
    ::ActorOwnerComponent const&                                       actorFlags,
    ::ActorDataFlagComponent const&                                    actorIdentifier,
    ::ActorDefinitionIdentifierComponent const&                        actorUniqueID,
    ::ActorUniqueIDComponent const&                                    dimensionType,
    ::DimensionTypeComponent const&                                    currentlyStandingOnBlock,
    ::CurrentlyStandingOnBlockComponent const&                         soundEventPlayer,
    ::SoundEventPlayerComponent const&                                 randomReference,
    ::RandomReferenceComponent const&                                  movementSound,
    ::MovementSoundComponent&                                          requestQueueView,
    ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>& randomView,
    ::ViewT<::StrictEntityContext, ::RandomComponent>&
);
// NOLINTEND

} // namespace PlayActorStepSoundSystemImpl
