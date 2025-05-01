#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct ControlledByLocalInstanceComponent;
struct PassengerComponent;
struct SetMovingFlagRequestComponent;
// clang-format on

namespace CacheMovingStateSystem {
// functions
// NOLINTBEGIN
MCNAPI void tickPassengerEntity(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::PassengerComponent const&                                                            passenger,
    ::ActorDataFlagComponent&                                                              actorDataFlag,
    ::ActorDataDirtyFlagsComponent&                                                        dirtyFlags,
    ::ActorRotationComponent&                                                              rotation,
    ::Optional<::SetMovingFlagRequestComponent>                                            setMovingFlagRequest,
    ::ViewT<::StrictEntityContext, ::Include<::ControlledByLocalInstanceComponent>> const& controlledByLocalInstanceView
);
// NOLINTEND

} // namespace CacheMovingStateSystem
