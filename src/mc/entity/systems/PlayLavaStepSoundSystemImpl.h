#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct MakesLavaStepSoundComponent;
struct ShouldPlayStepSoundComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
// clang-format on

namespace PlayLavaStepSoundSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tick(
    ::entt::type_list<::Include<::ShouldPlayStepSoundComponent, ::MakesLavaStepSoundComponent>>,
    ::StrictEntityContext const&                                       entity,
    ::ActorDataFlagComponent const&                                    actorFlags,
    ::ActorDefinitionIdentifierComponent const&                        actorIdentifier,
    ::ActorUniqueIDComponent const&                                    actorUniqueID,
    ::DimensionTypeComponent const&                                    dimensionType,
    ::CurrentlyStandingOnBlockComponent const&                         currentlyStandingOnBlockComponent,
    ::SoundEventPlayerComponent const&                                 soundEventPlayerComponent,
    ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>& requestQueueView
);
// NOLINTEND

} // namespace PlayLavaStepSoundSystemImpl
