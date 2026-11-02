#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityContext;
struct ClientAcceptanceThresholdsComponent;
// clang-format on

namespace ServerMovement {
// functions
// NOLINTBEGIN
MCNAPI void notifyOfServerInitiatedMotion(::EntityContext& entity);

MCNAPI void notifyOfServerInitiatedPlayerMotion(
    ::ActorOwnerComponent&                 actorOwnerComponent,
    ::ClientAcceptanceThresholdsComponent* clientAcceptanceThresholdsComponent
);
// NOLINTEND

} // namespace ServerMovement
