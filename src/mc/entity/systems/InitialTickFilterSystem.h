#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IConstBlockSource;
class StrictEntityContext;
class TickWorldComponent;
struct ActorHeadRotationComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct ActorWalkAnimationComponent;
struct CurrentTickComponent;
struct DimensionTypeComponent;
struct GlobalActorComponent;
struct InterpolateMovementNeededComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace InitialTickFilterSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createTickingAreaFilterSystem();

MCAPI ::TickingSystemWithInfo createValidChunkFilterSystem();

MCAPI bool hasInvalidBlock(::IConstBlockSource const& region, ::BlockPos const& blockPos);

MCAPI void tick(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent>,
        ::StateVectorComponent,
        ::Optional<::ActorRotationComponent>,
        ::Optional<::MobBodyRotationComponent>,
        ::Optional<::ActorHeadRotationComponent>,
        ::Optional<::ActorWalkAnimationComponent>,
        ::Exclude<::GlobalActorComponent>>                                mainView,
    ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const> const& dimensionView,
    ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent const>       factory,
    ::EntityModifier<
        ::ActorMovementTickNeededComponent,
        ::InterpolateMovementNeededComponent,
        ::VehicleInputIntentComponent> modifier
);

MCAPI void tickingAreaFilterTickEntity(
    ::StrictEntityContext const&                                                                context,
    ::TickWorldComponent&                                                                       tickWorldComponent,
    ::CurrentTickComponent const&                                                               currentTickComponent,
    ::EntityModifier<::ActorMovementTickNeededComponent, ::InterpolateMovementNeededComponent>& modifier
);

MCAPI void tickingAreaFilterTickView(
    ::OptionalGlobal<::CurrentTickComponent const> currentTickComponent,
    ::ViewT<::StrictEntityContext, ::Include<::InterpolateMovementNeededComponent>, ::TickWorldComponent> view,
    ::EntityModifier<::ActorMovementTickNeededComponent, ::InterpolateMovementNeededComponent>            modifier
);

MCAPI void validChunkFilterTickEntity(
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
