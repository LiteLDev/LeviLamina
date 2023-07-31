#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
template<typename... T0> struct Include;
// clang-format on

namespace StackableAndMobNearCollisionSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?tickSystem\@StackableAndMobNearCollisionSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUDimensionTypeComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@AEAUMoveRequestComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAABBShapeComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@AEAULocalSpatialEntityFetcherFactoryComponent\@\@AEAVLocalSpatialEntityFetcher\@\@\@Z
 */
MCAPI void
tickSystem(class StrictEntityContext&, struct AABBShapeComponent const&, struct DimensionTypeComponent const&, struct SynchedActorDataComponent const&, class Optional<class FlagComponent<struct CollidableMobNearFlag> const>, struct MoveRequestComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AABBShapeComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, struct LocalSpatialEntityFetcherFactoryComponent&, class LocalSpatialEntityFetcher&);
// NOLINTEND

}; // namespace StackableAndMobNearCollisionSystemImpl
