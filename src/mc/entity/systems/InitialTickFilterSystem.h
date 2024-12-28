#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
class TickWorldComponent;
struct ActorHeadRotationComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct ActorWalkAnimationComponent;
struct CurrentTickComponent;
struct MobBodyRotationComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace InitialTickFilterSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createTickingAreaFilterSystem();

MCAPI ::TickingSystemWithInfo createValidChunkFilterSystem();

MCAPI void tickingAreaFilterTickEntity(
    ::StrictEntityContext const&                          context,
    ::TickWorldComponent&                                 tickWorldComponent,
    ::CurrentTickComponent const&                         currentTickComponent,
    ::EntityModifier<::ActorMovementTickNeededComponent>& modifier
);

MCAPI void tickingAreaFilterTickView(
    ::OptionalGlobal<::CurrentTickComponent const> currentTickComponent,
    ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>, ::TickWorldComponent> view,
    ::EntityModifier<::ActorMovementTickNeededComponent>                                                modifier
);

MCAPI void validChunkFilterTickEntity(
    ::StrictEntityContext const&                               context,
    ::StateVectorComponent&                                    stateVector,
    ::Optional<::ActorRotationComponent> const&                actorRotation,
    ::Optional<::MobBodyRotationComponent> const&              mobBodyRotation,
    ::Optional<::ActorHeadRotationComponent> const&            actorHeadRotation,
    ::Optional<::ActorWalkAnimationComponent> const&           actorWalkAnimation,
    ::std::function<void(::StrictEntityContext const&)> const& modifierFunctor,
    bool                                                       resetAnimation,
    ::IConstBlockSource const&                                 region
);
// NOLINTEND

} // namespace InitialTickFilterSystem
