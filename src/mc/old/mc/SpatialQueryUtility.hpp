/**
 * @file  SpatialQueryUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SpatialQueryUtility.
 *
 */
class SpatialQueryUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPATIALQUERYUTILITY
public:
    class SpatialQueryUtility& operator=(class SpatialQueryUtility const &) = delete;
    SpatialQueryUtility(class SpatialQueryUtility const &) = delete;
    SpatialQueryUtility() = delete;
#endif

public:
    /**
     * @symbol  ?forEachBlockInAABB\@SpatialQueryUtility\@\@SAXAEBVIConstBlockSource\@\@AEBVAABB\@\@AEBV?$function\@$$A6AXAEBVBlock\@\@AEBVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachBlockInAABB(class IConstBlockSource const &, class AABB const &, class std::function<void (class Block const &, class BlockPos const &)> const &);
    /**
     * @symbol  ?testForCollidableMobs\@SpatialQueryUtility\@\@SAXAEBVStrictEntityContext\@\@AEAVLocalSpatialEntityFetcher\@\@AEBVAABB\@\@2V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void testForCollidableMobs(class StrictEntityContext const &, class LocalSpatialEntityFetcher &, class AABB const &, class AABB const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, std::vector<class AABB> &);
    /**
     * @symbol  ?testForEntityStacking\@SpatialQueryUtility\@\@SAXAEBVStrictEntityContext\@\@AEAVLocalSpatialEntityFetcher\@\@AEBVAABB\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAABBShapeComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void testForEntityStacking(class StrictEntityContext const &, class LocalSpatialEntityFetcher &, class AABB const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AABBShapeComponent const, struct SynchedActorDataComponent const>, std::vector<class AABB> &);

};