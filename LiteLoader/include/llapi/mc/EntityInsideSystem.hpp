/**
 * @file  EntityInsideSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace EntityInsideSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createCleanupSystem\@EntityInsideSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createSystem\@EntityInsideSystem\@\@YA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI struct TickingSystemWithInfo createSystem(bool);
    /**
     * @symbol ?isSlidingDown\@EntityInsideSystem\@\@YA_NAEBVBlockPos\@\@AEBVVec3\@\@1AEBVVec2\@\@\@Z
     */
    MCAPI bool isSlidingDown(class BlockPos const &, class Vec3 const &, class Vec3 const &, class Vec2 const &);
    /**
     * @symbol ?onBoatAboveBubbleColumn\@EntityInsideSystem\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void onBoatAboveBubbleColumn(class Actor &);
    /**
     * @symbol ?tickBoatInsideBubbleColumnBlock\@EntityInsideSystem\@\@YAXAEBUInsideBubbleColumnBlockComponent\@\@AEAUFallDistanceComponent\@\@AEAUStateVectorComponent\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI void tickBoatInsideBubbleColumnBlock(struct InsideBubbleColumnBlockComponent const &, struct FallDistanceComponent &, struct StateVectorComponent &, class ActorOwnerComponent &);
    /**
     * @symbol ?tickInsideBubbleColumnBlock\@EntityInsideSystem\@\@YAXAEBUInsideBubbleColumnBlockComponent\@\@AEAUFallDistanceComponent\@\@AEAUStateVectorComponent\@\@V?$optional_ref\@$$CBUAbilitiesComponent\@\@\@\@\@Z
     */
    MCAPI void tickInsideBubbleColumnBlock(struct InsideBubbleColumnBlockComponent const &, struct FallDistanceComponent &, struct StateVectorComponent &, class optional_ref<struct AbilitiesComponent const>);
    /**
     * @symbol ?tickInsideCactusBlock\@EntityInsideSystem\@\@YAXAEBU?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@AEAUInsideBlockComponent\@\@\@Z
     */
    MCAPI void tickInsideCactusBlock(struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag> const &, struct InsideBlockComponent &);
    /**
     * @symbol ?tickInsideHoneyBlock\@EntityInsideSystem\@\@YAXAEBU?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@AEBUAABBShapeComponent\@\@AEAUStateVectorComponent\@\@AEAUFallDistanceComponent\@\@\@Z
     */
    MCAPI void tickInsideHoneyBlock(struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag> const &, struct AABBShapeComponent const &, struct StateVectorComponent &, struct FallDistanceComponent &);
    /**
     * @symbol ?tickInsidePowderSnowBlock\@EntityInsideSystem\@\@YAXAEBVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@VFreezingComponent\@\@UIgnoresEntityInsideFlagComponent\@\@UInsideBubbleColumnBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@UInsideGenericBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@U?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@V?$FlagComponent\@UWebBlockTag\@\@\@\@\@\@\@Z
     */
    MCAPI void tickInsidePowderSnowBlock(class StrictEntityContext const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>);
    /**
     * @symbol ?tickInsideWaterLilyBlock\@EntityInsideSystem\@\@YAXAEBU?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI void tickInsideWaterLilyBlock(struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag> const &, struct StateVectorComponent &);
    /**
     * @symbol ?tickMovementSlowdown\@EntityInsideSystem\@\@YAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@VFreezingComponent\@\@UIgnoresEntityInsideFlagComponent\@\@UInsideBubbleColumnBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@UInsideGenericBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@U?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@V?$FlagComponent\@UWebBlockTag\@\@\@\@\@\@VVec3\@\@\@Z
     */
    MCAPI void tickMovementSlowdown(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, class Vec3);
    /**
     * @symbol ?tickSetEntityInside\@EntityInsideSystem\@\@YAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUDimensionTypeComponent\@\@AEAUInsideBlockComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@VFreezingComponent\@\@UIgnoresEntityInsideFlagComponent\@\@UInsideBubbleColumnBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@UInsideGenericBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@U?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@V?$FlagComponent\@UWebBlockTag\@\@\@\@\@\@AEBULocalConstBlockSourceFactoryComponent\@\@AEAVLocalConstBlockSource\@\@\@Z
     */
    MCAPI void tickSetEntityInside(class StrictEntityContext const &, struct AABBShapeComponent const &, struct DimensionTypeComponent const &, struct InsideBlockComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, struct LocalConstBlockSourceFactoryComponent const &, class LocalConstBlockSource &);
    /**
     * @symbol ?tickSpectatorSkipEntityInside\@EntityInsideSystem\@\@YAXAEBVStrictEntityContext\@\@AEBUActorGameTypeComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@VFreezingComponent\@\@UIgnoresEntityInsideFlagComponent\@\@UInsideBubbleColumnBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@UInsideGenericBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@U?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@V?$FlagComponent\@UWebBlockTag\@\@\@\@\@\@AEBUExternalDataInterface\@\@\@Z
     */
    MCAPI void tickSpectatorSkipEntityInside(class StrictEntityContext const &, struct ActorGameTypeComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, struct ExternalDataInterface const &);

};