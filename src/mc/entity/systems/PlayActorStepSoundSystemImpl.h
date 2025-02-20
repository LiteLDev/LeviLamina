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
            ::MakesLavaStepSoundComponent>>,
    ::StrictEntityContext const&                                       entity,
    ::ActorOwnerComponent const&                                       actorOwner,
    ::ActorDefinitionIdentifierComponent const&                        actorDefinitionIdentifier,
    ::ActorDataFlagComponent const&                                    actorDataFlag,
    ::CurrentlyStandingOnBlockComponent const&                         currentlyStandingOnBlock,
    ::DimensionTypeComponent const&                                    dimensionType,
    ::SoundEventPlayerComponent const&                                 soundEventPlayer,
    ::RandomReferenceComponent const&                                  randomReference,
    ::MovementSoundComponent&                                          movementSound,
    ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>& requestQueueView,
    ::ViewT<::StrictEntityContext, ::RandomComponent>&                 randomView
);
// NOLINTEND

} // namespace PlayActorStepSoundSystemImpl
