#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class EntityContext;
class FreezingComponent;
// clang-format on

namespace FreezingSystemInternal {
// functions
// NOLINTBEGIN
MCAPI void processFreezeEffect(::Actor& actor, ::FreezingComponent const& freezeComp);

MCAPI void tickFreezeComponent(
    ::EntityContext&       entity,
    ::ActorOwnerComponent& actorOwnerComponent,
    ::FreezingComponent&   freezingComponent
);
// NOLINTEND

} // namespace FreezingSystemInternal
