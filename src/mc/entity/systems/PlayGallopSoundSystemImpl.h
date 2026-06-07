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
MCAPI void tick(
    ::entt::type_list<::Include<::ShouldPlayStepSoundComponent, ::HorseFlagComponent>> entity,
    ::StrictEntityContext const&                                                       actorFlags,
    ::ActorDataFlagComponent const&                                                    actorIdentifier,
    ::ActorDefinitionIdentifierComponent const&                                        actorUniqueID,
    ::ActorUniqueIDComponent const&                                                    dimensionType,
    ::DimensionTypeComponent const&                                                    actorDataHorseTypeComponent,
    ::ActorDataHorseTypeComponent const&                               currentlyStandingOnBlockComponent,
    ::CurrentlyStandingOnBlockComponent const&                         randomReferenceComponent,
    ::RandomReferenceComponent const&                                  soundEventPlayerComponent,
    ::SoundEventPlayerComponent const&                                 gallopSoundCounterComponent,
    ::GallopSoundCounterComponent&                                     vehicleComponent,
    ::Optional<::VehicleComponent const>                               requestQueueView,
    ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>& randomView,
    ::ViewT<::StrictEntityContext, ::RandomComponent>&
);
// NOLINTEND

} // namespace PlayGallopSoundSystemImpl
