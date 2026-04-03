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
class EntitySystems;
class IConstBlockSource;
class StrictEntityContext;
class TickWorldComponent;
struct ActorHeadRotationComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct ActorWalkAnimationComponent;
struct CurrentTickComponent;
struct InterpolateMovementNeededComponent;
struct MobBodyRotationComponent;
struct StateVectorComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace InitialTickFilterSystem {
// functions
// NOLINTBEGIN
MCNAPI void registerSystems(::EntitySystems& systemRegistry);

MCNAPI void tickingAreaFilterTickEntity(
    ::StrictEntityContext const&                                                                context,
    ::TickWorldComponent&                                                                       tickWorldComponent,
    ::CurrentTickComponent const&                                                               currentTickComponent,
    ::EntityModifier<::ActorMovementTickNeededComponent, ::InterpolateMovementNeededComponent>& modifier
);

MCNAPI void tickingAreaFilterTickView(
    ::OptionalGlobal<::CurrentTickComponent const> currentTickComponent,
    ::ViewT<::StrictEntityContext, ::Include<::InterpolateMovementNeededComponent>, ::TickWorldComponent> view,
    ::EntityModifier<::ActorMovementTickNeededComponent, ::InterpolateMovementNeededComponent>            modifier
);

MCNAPI void validChunkFilterTickEntity(
    ::StrictEntityContext const&                     context,
    ::StateVectorComponent&                          stateVector,
    ::Optional<::ActorRotationComponent> const&      actorRotation,
    ::Optional<::MobBodyRotationComponent> const&    mobBodyRotation,
    ::Optional<::ActorHeadRotationComponent> const&  actorHeadRotation,
    ::Optional<::ActorWalkAnimationComponent> const& actorWalkAnimation,
    ::EntityModifier<
        ::ActorMovementTickNeededComponent,
        ::InterpolateMovementNeededComponent,
        ::VehicleInputIntentComponent>& modifier,
    bool                                resetAnimation,
    ::IConstBlockSource const&          region
);
// NOLINTEND

} // namespace InitialTickFilterSystem
