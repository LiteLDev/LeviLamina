#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDataHorseTypeComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct GallopSoundCounterComponent;
struct HorseFlagComponent;
struct RandomComponent;
struct RandomReferenceComponent;
struct ShouldPlayStepSoundComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
struct VehicleComponent;
// clang-format on

namespace PlayGallopSoundSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tick(
    ::entt::type_list<::Include<::ShouldPlayStepSoundComponent, ::HorseFlagComponent>>,
    ::StrictEntityContext const&                                       entity,
    ::ActorDataFlagComponent const&                                    actorFlags,
    ::ActorDefinitionIdentifierComponent const&                        actorIdentifier,
    ::ActorUniqueIDComponent const&                                    actorUniqueID,
    ::DimensionTypeComponent const&                                    dimensionType,
    ::ActorDataHorseTypeComponent const&                               actorDataHorseTypeComponent,
    ::CurrentlyStandingOnBlockComponent const&                         currentlyStandingOnBlockComponent,
    ::RandomReferenceComponent const&                                  randomReferenceComponent,
    ::SoundEventPlayerComponent const&                                 soundEventPlayerComponent,
    ::GallopSoundCounterComponent&                                     gallopSoundCounterComponent,
    ::Optional<::VehicleComponent const>                               vehicleComponent,
    ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>& requestQueueView,
    ::ViewT<::StrictEntityContext, ::RandomComponent>&                 randomView
);
// NOLINTEND

} // namespace PlayGallopSoundSystemImpl
