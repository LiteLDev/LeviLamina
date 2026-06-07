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
struct CamelFlagComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct ShouldPlayStepSoundComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
// clang-format on

namespace PlayCamelStepSoundSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tick(
    ::entt::type_list<::Include<::ShouldPlayStepSoundComponent, ::CamelFlagComponent>> entity,
    ::StrictEntityContext const&                                                       actorFlags,
    ::ActorDataFlagComponent const&                                                    actorIdentifier,
    ::ActorDefinitionIdentifierComponent const&                                        actorUniqueID,
    ::ActorUniqueIDComponent const&                                                    dimensionType,
    ::DimensionTypeComponent const&            currentlyStandingOnBlockComponent,
    ::CurrentlyStandingOnBlockComponent const& soundEventPlayerComponent,
    ::SoundEventPlayerComponent const&         requestQueueView,
    ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>&
);
// NOLINTEND

} // namespace PlayCamelStepSoundSystemImpl
