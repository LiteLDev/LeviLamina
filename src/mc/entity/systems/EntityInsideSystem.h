#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

namespace EntityInsideSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createCleanupSystem();

MCAPI struct TickingSystemWithInfo createSystem(bool isClientSide);

MCAPI bool isAir(class Block const& block);

MCAPI bool isSlidingDown(
    class BlockPos const& blockPos,
    class Vec3 const&     entityPos,
    class Vec3 const&     entityPosDelta,
    class Vec2 const&     aabbDim
);

MCAPI void onBoatAboveBubbleColumn(class Actor& actor);

MCAPI void tickBoatInsideBubbleColumnBlock(
    struct InsideBubbleColumnBlockComponent const& insideBlocks,
    struct FallDistanceComponent&                  fallDistanceComponent,
    struct StateVectorComponent&                   svc,
    class ActorOwnerComponent&                     actorOwnerComponent
);

MCAPI void tickInsideBubbleColumnBlock(
    struct InsideBubbleColumnBlockComponent const&              insideBlocks,
    struct FallDistanceComponent&                               fallDistanceComponent,
    struct StateVectorComponent&                                svc,
    class optional_ref<struct MovementAbilitiesComponent const> abilitiesComponent
);

MCAPI void tickInsideCactusBlock(
    struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag> const& cactus,
    struct InsideBlockComponent&                                              insideBlock
);

MCAPI void tickInsideHoneyBlock(
    struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag> const& insideHoneyBlockComponent,
    struct AABBShapeComponent const&                                         aabbShapeComponent,
    struct StateVectorComponent&                                             stateVectorComponent,
    struct FallDistanceComponent&                                            fallDistanceComponent
);

MCAPI void tickInsidePowderSnowBlock(
    class StrictEntityContext const& entity,
    class EntityModifier<
        struct BlockMovementSlowdownAppliedComponent,
        class FreezingComponent,
        struct IgnoresEntityInsideFlagComponent,
        struct InsideBubbleColumnBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
        struct InsideGenericBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
        struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
        class FlagComponent<struct WebBlockTag>> modifier
);

MCAPI void tickInsideWaterLilyBlock(
    struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag> const& insideWaterlilyBlockComponent,
    struct StateVectorComponent&                                         stateVectorComponent
);

MCAPI void tickMovementSlowdown(
    class StrictEntityContext const&                 entity,
    struct BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent,
    class EntityModifier<
        struct BlockMovementSlowdownAppliedComponent,
        class FreezingComponent,
        struct IgnoresEntityInsideFlagComponent,
        struct InsideBubbleColumnBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
        struct InsideGenericBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
        struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
        class FlagComponent<struct WebBlockTag>> modifier,
    class Vec3                                   multiplicationModifier
);

MCAPI void tickSetEntityInside(
    class StrictEntityContext const&     entity,
    struct AABBShapeComponent const&     aabbShape,
    struct DimensionTypeComponent const& dimension,
    struct InsideBlockComponent&         insideBlock,
    class EntityModifier<
        struct BlockMovementSlowdownAppliedComponent,
        class FreezingComponent,
        struct IgnoresEntityInsideFlagComponent,
        struct InsideBubbleColumnBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
        struct InsideGenericBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
        struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
        class FlagComponent<struct WebBlockTag>>        modifier,
    struct LocalConstBlockSourceFactoryComponent const& factory,
    class LocalConstBlockSource&                        localBlockSource
);

MCAPI void tickSpectatorSkipEntityInside(
    class StrictEntityContext const&     entity,
    struct ActorGameTypeComponent const& gameType,
    class EntityModifier<
        struct BlockMovementSlowdownAppliedComponent,
        class FreezingComponent,
        struct IgnoresEntityInsideFlagComponent,
        struct InsideBubbleColumnBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
        struct InsideGenericBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
        struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
        class FlagComponent<struct WebBlockTag>> modifier,
    struct ExternalDataInterface const&          externalData
);
// NOLINTEND

}; // namespace EntityInsideSystem
