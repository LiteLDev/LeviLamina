#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class LocalSpatialEntityFetcher;
class StrictEntityContext;
struct AABBShapeComponent;
struct DepenetrationComponent;
struct DimensionTypeComponent;
struct IsSolidMobComponent;
struct IsSolidMobNearbyComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MobFlagComponent;
struct MoveRequestComponent;
struct ServerCatchupMovementTrackerComponent;
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

MCAPI void registerSystems(::EntitySystems& systems, bool isClientSide);

MCAPI void storeNearbyMobsOnMoveRequest(
    ::IsSolidMobNearbyComponent const& nearby,
    ::DepenetrationComponent&          depenetration,
    ::MoveRequestComponent&            request
);
// NOLINTEND

} // namespace SolidMobSystem
