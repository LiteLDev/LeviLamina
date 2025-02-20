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
class AABB;
class ActorOwnerComponent;
class EntitySystems;
class LocalSpatialEntityFetcher;
class PredictedMovementComponent;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorComponent;
struct ActorIsFirstTickFlagComponent;
struct ActorMovementTickNeededComponent;
struct DepenetrationComponent;
struct DimensionTypeComponent;
struct FallingBlockFlagComponent;
struct IsSolidMobComponent;
struct IsSolidMobNearbyComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MobFlagComponent;
struct MoveRequestComponent;
struct MovementInterpolatorComponent;
struct OffsetsComponent;
struct ServerCatchupMovementTrackerComponent;
struct ShouldBeSimulatedComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace SolidMobSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createRewindShapeRefreshSystem();

MCAPI ::TickingSystemWithInfo createStoreNearbyMobsOnMoveRequestSystem();

MCAPI void flagNearbyMobsForServerMovementCatchup(
    ::StrictEntityContext const&                   player,
    ::StateVectorComponent const&                  stateVector,
    ::ServerCatchupMovementTrackerComponent const& tracker,
    ::ViewT<
        ::StrictEntityContext,
        ::DimensionTypeComponent const,
        ::AABBShapeComponent const,
        ::Optional<::MobFlagComponent const>,
        ::Optional<::IsSolidMobComponent const>> const&                                            fullData,
    ::ViewT<::StrictEntityContext, ::IsSolidMobComponent const, ::AABBShapeComponent const> const& solidMobs,
    ::EntityModifier<::IsSolidMobNearbyComponent>                                                  modifier,
    ::LocalSpatialEntityFetcherFactoryComponent const&                                             fetcherFactory,
    ::LocalSpatialEntityFetcher&                                                                   fetcher,
    ::std::vector<::StrictEntityContext>&                                                          buffer
);

MCAPI void flagNearbyMobsForServerMovementCatchupSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::StateVectorComponent const,
        ::ServerCatchupMovementTrackerComponent const> view,
    ::ViewT<
        ::StrictEntityContext,
        ::DimensionTypeComponent const,
        ::AABBShapeComponent const,
        ::Optional<::MobFlagComponent const>,
        ::Optional<::IsSolidMobComponent const>> const&                                            fullData,
    ::ViewT<::StrictEntityContext, ::IsSolidMobComponent const, ::AABBShapeComponent const> const& solidMobs,
    ::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent const>                            fetcherFactory,
    ::EntityModifier<::IsSolidMobNearbyComponent>                                                  modifier
);

MCAPI void flagNearbyMobsFromSolidEntity(
    ::StrictEntityContext const& solidMob,
    ::IsSolidMobComponent const& solid,
    ::AABBShapeComponent const&  shape,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorOwnerComponent, ::AABBShapeComponent>,
        ::Exclude<::ActorIsFirstTickFlagComponent>,
        ::Optional<::MobFlagComponent const>,
        ::Optional<::IsSolidMobComponent const>,
        ::Optional<::FallingBlockFlagComponent const>> const& liveEntityView,
    ::LocalSpatialEntityFetcher&                              fetcher,
    ::EntityModifier<::IsSolidMobNearbyComponent>             modifier,
    ::std::vector<::StrictEntityContext>&                     buffer
);

MCAPI void flagNearbyMobsFromSolidSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorComponent>,
        ::DimensionTypeComponent const,
        ::IsSolidMobComponent const,
        ::AABBShapeComponent const> view,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorOwnerComponent, ::AABBShapeComponent>,
        ::Exclude<::ActorIsFirstTickFlagComponent>,
        ::Optional<::MobFlagComponent const>,
        ::Optional<::IsSolidMobComponent const>,
        ::Optional<::FallingBlockFlagComponent const>> const&           liveEntityView,
    ::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent const> fetcherFactory,
    ::EntityModifier<::IsSolidMobNearbyComponent>                       modifier
);

MCAPI void flagSolidMobsFromNearbyEntity(
    ::StrictEntityContext const&                                                                   entity,
    ::AABBShapeComponent const&                                                                    shape,
    ::Optional<::MobFlagComponent const>                                                           isMob,
    ::Optional<::IsSolidMobComponent const>                                                        isSolid,
    ::ViewT<::StrictEntityContext, ::IsSolidMobComponent const, ::AABBShapeComponent const> const& nearbySolidMobs,
    ::LocalSpatialEntityFetcher&                                                                   fetcher,
    ::EntityModifier<::IsSolidMobNearbyComponent>                                                  modifier,
    ::std::vector<::StrictEntityContext>&                                                          buffer
);

MCAPI void flagSolidMobsFromNearbySystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ShouldBeSimulatedComponent, ::ActorMovementTickNeededComponent>,
        ::DimensionTypeComponent const,
        ::AABBShapeComponent const,
        ::Optional<::MobFlagComponent const>,
        ::Optional<::IsSolidMobComponent const>>                                                   view,
    ::ViewT<::StrictEntityContext, ::IsSolidMobComponent const, ::AABBShapeComponent const> const& solidMobs,
    ::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent const>                            fetcherFactory,
    ::EntityModifier<::IsSolidMobNearbyComponent>                                                  modifier
);

MCAPI ::std::optional<::AABB> getLatestAABB(
    ::StrictEntityContext const&                                                                e,
    ::ViewT<::StrictEntityContext, ::AABBShapeComponent const, ::OffsetsComponent const> const& aabbs,
    ::ViewT<::StrictEntityContext, ::PredictedMovementComponent const> const&                   pmcs,
    ::ViewT<::StrictEntityContext, ::MovementInterpolatorComponent const> const&                interpolators
);

MCAPI ::std::optional<::Vec3> getLatestPosition(
    ::StrictEntityContext const&                                                 e,
    ::ViewT<::StrictEntityContext, ::PredictedMovementComponent const> const&    pmcs,
    ::ViewT<::StrictEntityContext, ::MovementInterpolatorComponent const> const& interpolators
);

MCAPI void registerSystems(::EntitySystems& systems, bool isClientSide);

MCAPI void storeNearbyMobsOnMoveRequest(
    ::IsSolidMobNearbyComponent const& nearby,
    ::DepenetrationComponent&          depenetration,
    ::MoveRequestComponent&            request
);
// NOLINTEND

} // namespace SolidMobSystem
