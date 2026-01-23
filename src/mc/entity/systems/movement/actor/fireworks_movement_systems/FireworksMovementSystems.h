#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/systems/movement/actor/fireworks_movement_systems/RocketAttached.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class LocalSpatialEntityFetcher;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct DimensionTypeComponent;
struct FireworksRocketFlagComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MobFlagComponent;
struct MoveRequestComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
// clang-format on

namespace FireworksMovementSystems {
// functions
// NOLINTBEGIN
MCNAPI void fireworksRocketMoveClient(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::FireworksRocketFlagComponent>,
        ::SynchedActorDataComponent const,
        ::StateVectorComponent,
        ::ActorRotationComponent>                                                               view,
    ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::StateVectorComponent const> stateVectors,
    ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const>                              dimensions,
    ::EntityModifier<::ActorSetPositionRequestComponent>                                        modifier,
    ::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent>                               factoryComponent
);

MCNAPI ::FireworksMovementSystems::RocketAttached fireworksRocketMoveClientEntity(
    ::StrictEntityContext const&       rocket,
    ::SynchedActorDataComponent const& rocketData,
    ::StateVectorComponent&            rocketStateVector,
    ::ActorRotationComponent&          rocketRotation,
    ::LocalSpatialEntityFetcher&       fetcher,
    ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::StateVectorComponent const> const& stateVectors,
    ::EntityModifier<::ActorSetPositionRequestComponent>                                               modifier
);

MCNAPI void fireworksRocketMoveServer(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::FireworksRocketFlagComponent>,
        ::SynchedActorDataComponent const,
        ::StateVectorComponent,
        ::ActorRotationComponent>                                                               view,
    ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::StateVectorComponent const> stateVectors,
    ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const>                              dimensions,
    ::EntityModifier<::ActorSetPositionRequestComponent>                                        clientModifier,
    ::EntityModifier<::MoveRequestComponent>                                                    serverModifier,
    ::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent>                               factoryComponent
);

MCNAPI void registerRocketMovementSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace FireworksMovementSystems
