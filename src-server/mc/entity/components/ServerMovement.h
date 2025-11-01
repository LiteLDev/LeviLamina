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
MCAPI void notifyOfServerInitiatedMotion(::EntityContext& entity);

MCAPI void notifyOfServerInitiatedPlayerMotion(::ActorOwnerComponent& actorOwnerComponent, ::ClientAcceptanceThresholdsComponent* clientAcceptanceThresholdsComponent);
// NOLINTEND

}
