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
    ::entt::type_list<::Include<::ShouldPlayStepSoundComponent, ::CamelFlagComponent>>,
    ::StrictEntityContext const&                                       entity,
    ::ActorDefinitionIdentifierComponent const&                        actorDefinitionIdentifierComponent,
    ::ActorDataFlagComponent const&                                    synchedActorDataComponent,
    ::CurrentlyStandingOnBlockComponent const&                         currentlyStandingOnBlockComponent,
    ::DimensionTypeComponent const&                                    dimensionTypeComponent,
    ::SoundEventPlayerComponent const&                                 soundEventPlayerComponent,
    ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent>& requestQueueView
);
// NOLINTEND

} // namespace PlayCamelStepSoundSystemImpl
